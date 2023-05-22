#include <iostream>
#include <fstream>

using namespace std;

struct AEROFLOT {
	string number;
	string destination;
	string type;
	int salary;

	void vvod() {

		cout << "Введите номер рейса: "; cin >> number;
		cout << "Введите место назначения: "; cin >> destination;
		cout << "Введите тип самолёта: "; cin >> type;
		cout << "Введите цену билета: "; cin >> salary;
		cout << endl;
	}

	void vivod() {
		cout << "Номер рейса: " << number << endl;
		cout << "Место назначения: " << destination << endl;
		cout << "Тип самолёта: " << type << endl;
		cout << "Цена билета: " << salary << endl;
		cout << endl << endl;
	}
};

int main() {
	setlocale(LC_ALL, "rus");
	int wish;
	int n; cout << "Введите количество элементов в массиве: "; cin >> n;
	AEROFLOT* note = new AEROFLOT[n];

	ofstream file;
	file.open("5.dat", ios::binary);
	if (!(file.is_open())) cerr << "Error!\n";
	else {
		for (int i = 0; i < n; ++i) {
			note[i].vvod();
			file.write((char*)&note[i], sizeof(AEROFLOT));
		}
	}
	file.close();
	//delete[] note1; -- ошибка
	//system("pause");
}