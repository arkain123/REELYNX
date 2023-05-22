#include <iostream>

using namespace std;

template <class T>
T sumOfNegative(T arr[], int length) {
	T sum = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] < 0)
			sum += arr[i];
	return sum;
}

int main() {
	setlocale(LC_ALL, "rus");
	int arrInt[10] = { 36, -59, 48, -87, 3, -96, 56, -98, 23, -86 };
	double arrDouble[10] = { 73.27, -52.12, -9.76, -24.37, 39.70, -12.91, -13.28, -9.31, 85.61, 46.88 };
	float arrFloat[10] = { 46.87095, -84.92453, -77.85705, -27.08030, 88.57067, 68.70888, 85.40633, 46.90785, 98.89574, -51.66143 };
	cout << "массив int: " << sumOfNegative(arrInt, 10) << endl;
	cout << "массив double: " << sumOfNegative(arrDouble, 10) << endl;
	cout << "массив float: " << sumOfNegative(arrFloat, 10) << endl;
}