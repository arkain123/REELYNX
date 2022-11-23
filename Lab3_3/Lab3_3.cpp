#include <stdio.h> // библиотека ввода-вывода
#include <cmath> // библиотека мат. операций
#include <locale.h>

using namespace std; // пространство имен

int main()
{
	setlocale(LC_ALL, ""); // русский язык в консоли

	int sum = 0;
	int x = 1;

	printf("Введите число (0 для завершения работы)\n");

	do {
		scanf_s("%i", &x);
		sum += x;
		printf("sum = %i\n", sum);
	}
	while (x != 0);
	printf("Программа прервана");

}