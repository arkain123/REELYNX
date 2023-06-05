#include <iostream>

using namespace std;

template <class T> double product(T arr, int length) {
	double result = 0;
	for (int i = 0; i < length; i++)
		result *= arr[i];
	return result;
}

int main(){
	int iarr[5] = { 52 , 66 , -18 , 61 , 53 };
	double darr[5] = { 92.19 , -60.07 , 36.52 , -24.80 , -74.56 };
	float farr[5] = { 58.62083 , -56.41403 , -91.13481 , -85.64830 , -76.16533 };
	cout << "Int arr: " << product(iarr, 5) << endl;
	cout << "Double arr: " << product(darr, 5) << endl;
	cout << "Float arr: " << product(farr, 5) << endl;
}