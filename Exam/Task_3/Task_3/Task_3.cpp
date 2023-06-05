#include <iostream>

using namespace std;


int main() {
	int n = 1;
	char** parr = new char* [n];
	char arr[255] = "My neighbor, everyone. He parks like this when his wife isn't home and moves it back when she's back so they can both park on one of the few spots with shade. This has been happening for months already and the administration doesn't do anything about it.";

	for (int i = 0; i < 255; i++) {
		if (arr[i] == ' ') {
			parr[0] = &arr[i];
			n++;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << &parr[i] << endl;
	}
}