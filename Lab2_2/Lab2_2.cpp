#include <iostream> // библиотека ввода-вывода
#include <cmath> // библиотека мат. операций
using namespace std; // пространство имен

int main()
{
	setlocale(LC_ALL, ""); // русский язык в консоли

	int number;
	char group;

	cout << "Введите число: ";
	cin >> number;

	// проверка принадлежности числа к группам
	if (number == 0 || number > 50) {
		group = 'A';
	}
	else if (abs(number) == number && number < 50 && number % 3 == 0) {
		group = 'B';
	}
	else if ((number % 2 == 0 && abs(number) != number) || number == 50) {
		group = 'C';
	}
	else {
		group = 'D';
	}

	cout << "Число " << number << " относится к группе " << group;
}