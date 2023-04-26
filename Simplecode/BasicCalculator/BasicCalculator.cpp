//Написать простой калькулятор. Пользователь вводит значение двух переменных.
//Описать меню в консоли для математических операций сложения, вычитания, умножения, деления.
//Через оператор switch реализовать математическую операцию соответствующую пункту меню.

#include <iostream>

using namespace std;

void addition(int first, int second) {
	system("cls");
	cout << "\t\tСложение\nВведите 2 числа:";
	cin >> first >> second;
	cout << "\nРезультат: " << first + second << endl;
	system("pause");
};

void subtraction(int first, int second) {
	system("cls");
	cout << "\t\tВычитание\nВведите 2 числа:";
	cin >> first >> second;
	cout << "\nРезультат: " << first - second << endl;
	system("pause");
};

void multiplication(int first, int second) {
	system("cls");
	cout << "\t\tУмножение\nВведите 2 числа:";
	cin >> first >> second;
	cout << "\nРезультат: " << first * second << endl;
	system("pause");
};

void division(int first, int second) {
	system("cls");
	cout << "\t\tДеление\nВведите 2 числа:";
	cin >> first >> second;
	cout << "\nРезультат: " << first / second << endl;
	system("pause");
};

int main() {
	setlocale(LC_ALL, "rus");
	int first = 0, second = 0;
	while (true) {
		system("cls");
		int choise = 0;
		cout << "\tВыберите действие:\n";
		cout << "1. Сложение\n";
		cout << "2. Вычитание\n";
		cout << "3. Умножение\n";
		cout << "4. Деление\n";
		cout << "0. Выход из программы\n";
		cin >> choise;
		switch (choise) {
		case 1:
			addition(first, second);
			break;
		case 2:
			subtraction(first, second);
			break;
		case 3:
			multiplication(first, second);
			break;
		case 4:
			division(first,second);
			break;
		case 0:
			system("cls");
			return 0;
		default:
			cout << "\nНеизвестная операция!";
			system("pause");
		}
	}
}