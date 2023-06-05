#include <iostream>

using namespace std;

bool equalsPToArrElem(int* parr) {
	if (*(parr + 1) > 0) {
		return false;
	}
	else {
		return true;
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	int darr[5][5] = { 
		{1,   2,  3,  4, 5},
		{6,   7,  8,  9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25} 
	};
	int num = 4;
	int* pdarr = &darr[3][2];
	int* parr = &num;
	
	cout << "\t9 задание\n"								// I/O
		<< "Указатель на число: " << (equalsPToArrElem(parr) ? "true" : "false")
		<< "\nУказатель на двумерный массив: " << (equalsPToArrElem(pdarr) ? "true" : "false");

}