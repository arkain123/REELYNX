#include <iostream>

using namespace std;

int min_number(int a, int b) {
	if (a <= b) return a;
	return b;
};

int max_number(int a, int b) {
	if (a >= b) return a;
	return b;
};

int sum_of_elements(int a, int b) {
	return a + b;
};

int product_of_elements(int a, int b) {
	return a * b;
};

int main() {
	//system("color F0");
	setlocale(LC_ALL, "ru");
	system("cls");
	int choise, first, second;
	int (*operations[4])(int, int) = {min_number, max_number, sum_of_elements, product_of_elements };
	cout << "\tВведите номер функции\n1 - Поиск минимального числа\n2 - Поиск максимального числа\n3 - Найти сумму элементов\n4 - Найти произведение элементов\n";
	cout << "-> ";
	cin >> choise;
	system("cls");
	cout << "\tВведите 2 числа\n";
	cout << "1: -> ";
	cin >> first;
	cout << "2: -> ";
	cin >> second;
	cout << "\nРезультат вычислений: " << operations[choise - 1](first, second) << endl; 
}