#include <iostream>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}

int main() {
	setlocale(LC_ALL, "rus");
	int (*pfoo[3])(int, int) = { sum, multiply, divide };
	int a, b;

	cout << "\t10 задание\n"		//I/O
		<< "Введите a и b\n"
		<< "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << endl << a << " + " << b << " = " << pfoo[0](a, b)
		<< endl << a << " * " << b << " = " << pfoo[1](a, b)
		<< endl << a << " / " << b << " = " << pfoo[2](a, b);
 }