#include <iostream>
#include <math.h>

using namespace std;


int even(int a, bool result) {
	if (a % 2 == 0) {
		result = 1;
	}
	else {
		result = 0;
	}
	return result;
}


int main() {
	int b;
	bool result{ 0 };
	setlocale(LC_ALL, "rus");
	cout << "Введите значение: ";
	cin >> b;
	result = even(b, result);
	cout << "Число является четным? - ";
	std::cout << std::boolalpha;
	cout << result;
}