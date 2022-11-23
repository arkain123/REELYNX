#include <iostream> // библиотека ввода-вывода
#include <math.h> // библиотека мат. операций
using namespace std; // пространство имен

int main() {
	setlocale(LC_ALL, ""); // русский язык в консоли
	cout << "Введите значение угла в радианах: ";
	double alfa;
	double z1;
	double z2;
	cin >> alfa;

	z1 = 2 * pow(sin(3.1416 - 2 * alfa), 2) * pow(cos(5 * 3.1416 + 2 * alfa), 2); // вычисляем формулы
	z2 = (1. / 4.) - (1. / 4.) * sin((5. / 2.) * 3.1416 - 8 * alfa);

	cout << "z1 = ";
	cout << z1 << endl;
	cout << "z2 = ";
	cout << z2 << endl;

}