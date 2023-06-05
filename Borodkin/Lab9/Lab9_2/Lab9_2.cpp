#include <iostream>
#include <fstream>

using namespace std;

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
};

//void write_info() {
//	system("cls");
//	cout << "Введите фамилию сотрудника: ";
//	cin >> 
//}
//
//void read_info() {
//
//}

int main() {
	system("color F0");
	setlocale(LC_ALL, "rus");
	int wish;
	int n; cout << "Введите количество элементов в массиве: "; cin >> n;
	NOTES* note = new NOTES[n];

	ofstream file;
	file.open("1.dat", ios::binary);
	if (!(file.is_open())) cerr << "Error!\n";
	else {
		for (int i = 0; i < n; ++i) {
			note[i].vvod();
			file.write((char*)&note[i], sizeof(NOTES));
		}
	}
	file.close();

	/*NOTES* note1 = new NOTES[n];
	ifstream file1; 
	file1.open("1.dat", ios::binary);
	if (!(file1.is_open())) cerr << "Error!\n";
	else {
		for (int i = 0; i < n; ++i) {
			file1.read((char*)&note1[i], sizeof(NOTES));
		}
	}
	file1.close();
	cout << "\n\n";

	for (int i = 0; i < n; ++i) {
		note1[i].vivod();
	}*/
	delete[] note;
	/*delete[] note1;*/
}