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

int main() {
	system("cls");
	setlocale(LC_ALL, "rus");
	NOTES* arr[10];
	ifstream file1;
	file1.open("E:/BNTU/REELYNX/Borodkin/Lab9/Lab9_2/1.dat", ios::binary);
	if (!(file1.is_open())) cerr << "Error!\n";
	else {
		for (int i = 0; i < 10; ++i) {
			arr[i] = new NOTES;
			file1.read((char*)&arr[i], sizeof(NOTES));
		}
	}
	
	for (int i = 0; i < 10; i++) {
		cout << i+1 << " запись:\t" << arr[i] << endl;
	}

	for (int i = 0; i < 10; ++i) {
		delete[] arr[i];
	}
}