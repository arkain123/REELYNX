#include <iostream>
using namespace std;

struct complex {
	double x;
	double y;
};

void summa(int a, int b) {
	cout << "int: " << a + b << endl;
}

void summa(double a, double b) {
	cout << "double: " << a + b << endl;
}

void summa(complex a, complex b) {
	cout << "complex: " << a.x + b.x << " + " << a.y + b.y << "i" << endl;
}

int main() {
	int a = 3, b = 2;
	double c = 3.3, d = 4.8;
	complex number1 = { 8, 12 };
	complex number2 = { 4, 15 };
	summa(a, b);				//5
	summa(c, d);				//8.1
	summa(number1, number2);	//12 + 27i
}

