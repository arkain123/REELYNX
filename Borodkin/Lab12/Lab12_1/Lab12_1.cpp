#include <iostream>
#include <fstream>

using namespace std;

int COMP = 0, PERM = 0;

struct NOTES {
	string last_name;
	string number;
	int date[3];
	int salary;

	void vvod() {

		cout << "Введите фамилию: "; cin >> last_name;
		cout << "Введите номер телефона: "; cin >> number;
		cout << "Введите оклад: "; cin >> salary;
		cout << "Введите дату рождения: ";
		for (int i = 0; i < 3; ++i) cin >> date[i];
		cout << endl;
	}

	void vivod() {
		cout << "Фамилия: " << last_name << endl;
		cout << "Номер телефона: " << number << endl;
		cout << "Оклад: " << salary << endl;
		cout << "Дата рождения: ";
		for (int i = 0; i < 3; ++i) cout << date[i] << " ";
		cout << endl << endl;
	}
}*arr[10];

int findSmallestPosition(NOTES arr1[], int startPosition) {
	int smallestPosition = startPosition;

	for (int i = startPosition; i < 10; i++)
	{
		if (arr1[i].last_name[0] < arr1[smallestPosition].last_name[0])
			smallestPosition = i;
		COMP++;
	}
	return smallestPosition;
}

void sort_sel(NOTES arr1[]) {
	for (int i = 0; i < 10; i++)
	{
		int smallestPosition = findSmallestPosition(arr1, i);
		swap(arr1[i], arr1[smallestPosition]);
		PERM++;
	}
	return;
};

void sort_shell(int n, NOTES mass[])
{
	int i, j, step;
	NOTES tmp;
	for (step = n / 2; step > 0; step /= 2)
		for (i = step; i < n; i++)
		{
			tmp = mass[i];
			for (j = i; j >= step; j -= step)
			{
				if (tmp.salary > mass[j - step].salary) {
					mass[j].salary = mass[j - step].salary;
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
	ifstream file("1.dat", ios::binary);
	NOTES arr1[10];
	if (!(file.is_open())) {
		cout << "ne otkryt";
	}
	else {
		for (short int i = 0; i < 10; i++) {
			arr[i] = new NOTES;
			file.read((char*)*(&arr[i]), sizeof(NOTES));
			arr1[i] = *arr[i];
		}
	}
	while (wish) {
		cout << "Выберите ключ сортировки(1 - Фамилия; 2 - Оклад)\n-> ";
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
	cout << "schityvaem\n";
	for (short int i = 0; i < 10; i++) {
		arr1[i].vivod();
	}
	cout << "\n\n\nСравнения: " << COMP << "\nПерестановки: " << PERM;
	ofstream file1("2.dat", ios::binary);
	if (!(file1.is_open())) {
		cout << "ne otkryt";
	}
	else {
		for (short int i = 0; i < 10; i++) {
			file1.write((char*)&arr1[i], sizeof(NOTES));
		}
	}
}