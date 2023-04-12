////3.1
//#include <stdio.h> // библиотека ввода-вывода
//#include <cmath> // библиотека мат. операций
//#include <locale.h>
//using namespace std; // пространство имен
//
//int main()
//{
//	setlocale(LC_ALL, ""); // русский язык в консоли
//	double x1, x2, dx, a, b, c, F;
//
//	printf("Введите x1: ");
//	scanf_s("%lf", &x1);
//	printf(" \nВведите x2: ");
//	scanf_s("%lf", &x2);
//	printf(" \nВведите dx: ");
//	scanf_s("%lf", &dx);
//	printf(" \nВведите a: ");
//	scanf_s("%lf", &a);
//	printf(" \nВведите b: ");
//	scanf_s("%lf", &b);
//	printf(" \nВведите c: ");
//	scanf_s("%lf", &c);
//
//	printf("---------------------\n");
//	printf("|    x    |    F    |\n");
//
//	for (double x = x1; x < x2; x += dx) {
//		if (x < 0 && b != 0) {
//			F = a * pow(x, 2) + b;
//			printf("| %3.2lf | %3.2lf |\n", x, F);
//		}
//		else if (b == 0 && x > 0) {
//			F = (x - a) / (x - c);
//			printf("| %3.2lf | %3.2lf |\n", x, F);
//		}
//		else {
//			F = x / c;
//			printf("| %3.2lf | %3.2lf |\n", x, F);
//		}
//	}
//	printf("---------------------");
//
//
//
//}
//
////lab 3.3
//#include <stdio.h> // библиотека ввода-вывода
//#include <cmath> // библиотека мат. операций
//#include <locale.h>
//
//using namespace std; // пространство имен
//
//int main()
//{
//	setlocale(LC_ALL, ""); // русский язык в консоли
//
//	int sum = 0;
//	int x = 1;
//
//	printf("Введите число (0 для завершения работы)\n");
//
//	while (x != 0) {
//		scanf_s("%i", &x);
//		sum += x;
//		printf("sum = %i\n", sum);
//	};
//	printf("Программа прервана");
//
//}