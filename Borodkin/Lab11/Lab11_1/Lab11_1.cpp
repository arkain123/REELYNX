#include <iostream>
using namespace std;

template <typename T> const T summa(const T, const T); // прототип функции

struct complex {
	double x;
	double y;
};

int main() {
	int a = 3, b = 2;
	double c = 3.3, d = 4.8;
	complex number1 = { 8, 12 };
	complex number2 = { 4, 15 };
	cout << "int: " << summa(a, b) << endl; //5
	cout << "double: " << summa(c, d) << endl; //8.1
	cout << "complex: " << summa(number1.x, number2.x) << " + " << summa(number1.y, number2.y) << "i" << endl;
}

template <typename T> const T summa(const T a, const T b) {
	return a + b;
}
