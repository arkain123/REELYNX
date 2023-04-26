//Напишите программу, проверяющую число, веденное с клавиатуры, на четность.

#include <iostream>

using namespace std;

void odd(int number) {
	if (number % 2 == 0) {
		cout << "\nЧисло " << number << " чётное!\n";
	}
	else {
		cout << "\nЧисло " << number << " не чётное!\n";
	};
}

int main() {
	setlocale(LC_ALL, "rus");
	system("cls");
	int number;
	cout << "Введите число: ";
	cin >> number;
	odd(number);
}