#include <iostream>


void matchingChars(char a[], char b[]) {						//функция принимает 2 строки
	int size = sizeof(a) > sizeof(b) ? sizeof(a) : sizeof(b);	//берем наибольший размер строк
	for (short int i = 0; i < size; i++) {
		if (a[i] == b[i]) std::cout << i << std::endl;			//сравниваем символы
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	char a[10] = "aabbccdd";
	char b[15] = "abbccddeeff";
	std::cout << "\tИндексы совпадающих элементов\n";
	std::cout << "Исходные строка 1: ";
	for (int i = 0; i < sizeof(a); i++) {
		std::cout << a[i];
	}
	std::cout << "\nИсходная строка 2: ";
	for (int i = 0; i < sizeof(b); i++) {
		std::cout << b[i];
	}
	std::cout << std::endl;
	matchingChars(a, b);										//вызов функции
}
/*
В данном случае фукнция работает как процедура, ибо по условию задачи не уточнялось, необходимо ли возвращаемое значение. Поэтому чтобы
избежать проблем с выводом, организовал это в процедуре matchingChars.
*/