#include <iostream>

using namespace std;

template <class T> T minElem(T* p) {
	T min = p[0];
	for (int i = 0; i < 5; i++) {
		if (p[i] < min) {
			min = p[i];
		}
	}
	p = &min;
	return *p;
};

int main() {
	int arr[5]{ 1, 3, -4, 3, 5 };
	int* parr = arr;

	cout << minElem(parr);
}