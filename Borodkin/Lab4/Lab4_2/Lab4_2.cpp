#include <iostream> // библиотека ввода-вывода
#include <cmath> // библиотека мат. операций

using namespace std; // пространство имен

float f(double infx, double x) { // проверка введенного значения f(x) и преобразование в число
	float fx;
	if (infx == 1) {
		fx = exp(x);
		return fx;
	}
	else if (infx == 2) {
		fx = pow(x, 2);
		return fx;
	}
	else {
		cout << "Ошибка. Выбранно неправильное значение f(x)!";
		return 0;
	}
}

double one(double fx, double y) {
	return pow((fx)+y, 2) - sqrt(fx * y);
};

double two(double fx, double y) { 
	return pow((fx)+y, 2) + sqrt(abs(fx * y));
};

double three(double fx, double y) {
	return pow((fx)+y, 2) + 1;
};

int main()
{
	setlocale(LC_ALL, ""); // русский язык в консоли

	float fx;
	double infx, x, y, a;

	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Введите f(x). 1 = ex, 2 = x2: ";
	cin >> infx;

	fx = f(infx, x);
	
	// проверка условий сложной функции и вычисление результата
	if ((x * y) > 0) {
		 a = one(fx, y);
	}
	else if ((x * y) < 0) {
		 a = two(fx, y);
	}
	else {
		 a = three( fx, y);
	}

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	// проверка введенного значения f(x), для корректного вывода информации
	if (infx == 1) {
		cout << "f(x) = exp(x)" << endl;
	}
	else {
		cout << "f(x) = x^2" << endl;
	}
	cout << "a = " << a << endl;
} 