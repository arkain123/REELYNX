#include <iostream>
#include <fstream>

using namespace std;

int COMP = 0, PERM = 0;

struct AEROFLOT {
	string number;
	string destination;
	string type;
	double price;

	void vvod() {

		cout << "Введите номер рейса: "; cin >> number;
		cout << "Введите пункт назначения: "; cin >> destination;
		cout << "Введите тип самолёта: "; cin >> type;
		cout << "Введите цену билета: "; cin >> price;
		cout << endl;
	}

	void vivod() {
		cout << "Номер рейса: " << number << endl;
		cout << "Пункт назначения: " << destination << endl;
		cout << "Тип самолёта: " << type << endl;
		cout << "Цена билета: " << price << endl;
		cout << endl << endl;
	}
}*arr[10];

int findSmallestPosition(AEROFLOT arr1[], int startPosition) {
	int smallestPosition = startPosition;

	for (int i = startPosition; i < 10; i++)
	{
		if (arr1[i].number[0] < arr1[smallestPosition].number[0])
			smallestPosition = i;
		COMP++;
	}
	return smallestPosition;
}

void sort_sel(AEROFLOT arr1[]) {
	for (int i = 0; i < 10; i++)
	{
		int smallestPosition = findSmallestPosition(arr1, i);
		swap(arr1[i], arr1[smallestPosition]);
		PERM++;
	}
	return;
};

void sort_shell(int n, AEROFLOT mass[])
{
	int i, j, step;
	AEROFLOT tmp;
	for (step = n / 2; step > 0; step /= 2)
		for (i = step; i < n; i++)
		{
			tmp = mass[i];
			for (j = i; j >= step; j -= step)
			{
				if (tmp.price > mass[j - step].price) {
					mass[j].price = mass[j - step].price;
					PERM++;
				}
				else
					break;
			}
			mass[j] = tmp;
			COMP++;
		}
}

int main() {
	int choise;
	bool wish = true;
	setlocale(LC_ALL, "rus");
	ifstream file("5.dat", ios::binary);
	AEROFLOT arr1[10];
	if (!(file.is_open())) {
		cout << "Файл неудалось открыть!";
	}
	else {
		for (short int i = 0; i < 10; i++) {
			arr[i] = new AEROFLOT;
			file.read((char*)*(&arr[i]), sizeof(AEROFLOT));
			arr1[i] = *arr[i];
		}
	}
	while (wish) {
		cout << "Выберите ключ сортировки(1 - Номер рейса; 2 - Цена билета)\n-> ";
		cin >> choise;
		switch (choise) {
		case 1:
			sort_sel(arr1);
			wish = false;
			break;
		case 2:
			sort_shell(10, arr1);
			wish = false;
			break;
		}
	}
	cout << "Считываем...\n";
	for (short int i = 0; i < 10; i++) {
		arr1[i].vivod();
	}
	cout << "\n\n\nСравнения: " << COMP << "\nПерестановки: " << PERM;
	ofstream file1("5.dat", ios::binary);
	if (!(file1.is_open())) {
		cout << "Файл неудалось открыть!";
	}
	else {
		for (short int i = 0; i < 10; i++) {
			file1.write((char*)&arr1[i], sizeof(AEROFLOT));
		}
	}
}