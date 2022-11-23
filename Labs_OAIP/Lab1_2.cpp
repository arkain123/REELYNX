#include <iostream> // библиотека ввода-вывода
#include <math.h> // библиотека мат. операций
using namespace std; // пространство имен

int main() {
	setlocale(LC_ALL, ""); // русский €зык в консоли
	double a, b, c;
	double S;
	cout << "¬ведите длинну ребра a: ";
	cin >> a;
	cout << "¬ведите длинну ребра b: ";
	cin >> b;
	cout << "¬ведите длинну ребра c: ";
	cin >> c;

	S = 2 * (a * b + a * c + b * c); // вычисл€ем площадь поверхности параллелепипеда 

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "ѕлощадь поверхности параллелепипеда = " << S;

}