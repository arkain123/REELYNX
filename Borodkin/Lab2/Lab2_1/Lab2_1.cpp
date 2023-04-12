#include <iostream> // библиотека ввода-вывода
#include <cmath> // библиотека мат. операций
using namespace std; // пространство имен


int main()
{
	setlocale(LC_ALL, ""); // русский язык в консоли

	double x, y, a, infx;
	float fx;

	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Введите f(x). 1 = ex, 2 = x2: ";
	cin >> infx;

	// проверка введенного значения f(x) и преобразование в число
	
	if (infx == 1) {
		fx = exp(x);
	}
	else if (infx == 2) {
		fx = pow(x, 2);
	}
	else {
		cout << "Ошибка. Выбранно неправильное значение f(x)!";
	}

	// проверка условий сложной функции и вычисление результата
	if ((x * y) > 0) {
		a = pow((fx)+y, 2) - sqrt(fx * y);
	}
	else if ((x * y) < 0) {
		a = pow((fx)+y, 2) + sqrt(abs(fx * y));
	}
	else {
		a = pow((fx)+y, 2) + 1;
	}

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	// проверка введенного значения f(x), для корректного вывода информации
	if (infx == 1) {
		cout << "f(x) = exp(x)" << endl;
	}
	else if (infx == 2) {
		cout << "f(x) = x^2" << endl;
	}
	cout << "a = " << a << endl;
}