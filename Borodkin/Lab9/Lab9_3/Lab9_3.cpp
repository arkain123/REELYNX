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
	setlocale(LC_ALL, "rus");
	short int month;
	int n; cout << "Введите количество элементов в массиве: "; cin >> n;
	NOTES* note1 = new NOTES[n];
	ifstream file1;
	file1.open("E:/BNTU/REELYNX/Borodkin/Lab9/Lab9_2/1.dat", ios::binary);
	if (!(file1.is_open())) cerr << "Error!\n";
	else {
		for (int i = 0; i < n; ++i) {
			file1.read((char*)&note1[i], sizeof(NOTES));
		}
	}

	cout << "Какой месяц вас интересует?\n-> "; cin >> month;
	cout << "\n\n";
	for (int i = 0; i < n; ++i) {
		if (note1[i].date[1] == month) {
			note1[i].vivod();
		}
	}
	file1.close();
	//delete [] note1; -- ОШИБКА
	//system("pause");
}