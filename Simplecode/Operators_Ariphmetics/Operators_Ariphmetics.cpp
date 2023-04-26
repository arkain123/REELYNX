// Условие задачи:
// Введите три числа и выведите на экран значение суммы, произведения и среднее арифметическое этих чисел.
// Для выполнения задачи использовать переменные и операторы.

#include <iostream>
using namespace std;

int multiply(int first, int second, int third) {
	return first * second * third;
};

int addition(int first, int second, int third) {
	return first + second + third;
};

int average(int first, int second, int third) {
	return (first + second + third) / 3;
};

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "Введите три числа:\n";
	cin >> a >> b >> c;

	cout << "\na * b * c = " << multiply(a, b, c);
	cout << "\na + b + c = " << addition(a, b, c);
	cout << "\nСреднее арифметическое a, b и c = " << average(a, b, c) << endl;
}