#include <iostream> // библиотека ввода-вывода
#include <cmath> // библиотека мат. операций
using namespace std; // пространство имен

int main()
{
	setlocale(LC_ALL, ""); // русский язык в консоли

	int kol;

	cout << "Введите число: ";
	cin >> kol;

	// проверка на ввод отрицательног числа
	if (kol < 0) {
		cout << "Ошибка! Требуется положительное число!";
		return 0;
	}

	// вывод результата программы с использованием switch-case
	cout << "К-во спутников не менее " << kol << " имеют следующие планеты:" << endl;
	switch (kol) {
	case 0:
	case 1:
		cout << "Сатурн - 17" << endl << "Юпитер - 16" << endl << "Уран - 14" << endl << "Марс - 2" << endl << "Нептун - 2" <<
			endl << "Земля - 1" << endl << "Плутон - 1";
		break;

	case 2:
		cout << "Сатурн - 17" << endl << "Юпитер - 16" << endl << "Уран - 14" << endl << "Марс - 2" << endl << "Нептун - 2";
		break;

	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
		cout << "Сатурн - 17" << endl << "Юпитер - 16" << endl << "Уран - 14";
		break;

	case 15:
	case 16:
		cout << "Сатурн - 17" << endl << "Юпитер - 16";
		break;

	case 17:
		cout << "Сатурн - 17";
		break;

	default:
		cout << "Нет таких планет!";
		break;
	}
}