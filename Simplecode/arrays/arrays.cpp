#include <iostream>

using namespace std;

void foo(int* pa, int* pb) {
	int buff = *pa;
	*pa = *pb;
	*pb = buff;
}

int main() {
	int a, b;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "==============\n";
	foo(&a, &b);
	cout << "a: " << a; 
	cout << "\nb: " << b;
}