#include <iostream>

using namespace std;

struct AEROFLOT {
	int number;
	string destination;
	string type;
	double price;
};

void console_out(int arr[10]) {
	cout << "\tОдномерный массив\n";
	for (int i = 0; i < 10; i++)
		cout << arr[i] << "\t";
	cout << endl << endl;;
}

void console_out(int (&arr)[3][3]) {
	cout << "\tДвумерный массив\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}	
	cout << "\n";
}

void console_out(AEROFLOT structure) {
	cout << "\tСтруктура\n";
	cout << "Номер рейса:" << structure.number << endl; 
	cout << "Пункт назначения:" << structure.destination << endl;
	cout << "Тип самолёта: " << structure.type << endl;
	cout << "Цена билета: " << structure.price << endl;
}

int main() {
	setlocale(LC_ALL, "rus");
	int arr[10] = { 1, 2, 3, 4, 5, 10, 9, 8, 7, 6 };
	int arr2[3][3] = {
	{1, 5, 9},
	{2, 6, 7},
	{3, 4, 8}
	};
	AEROFLOT structure = {3412, "Moskow", "F - 22", 234.54};
	
	console_out(arr);
	console_out(arr2);
	console_out(structure);
}