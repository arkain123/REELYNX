#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	char line[] = "Some stupid shit";
	int n;

	//I/O
	cout << "\t11 задание.\n"
		<< "Введите n\n-> ";
	cin >> n;

	//Указатель принимает значение n-ого элемента и выводит на экран
	char* pline = &line[n];
	cout << "\n Строка:\n" << line << "\nn-ый элемент строки:\n" << *(pline);
}