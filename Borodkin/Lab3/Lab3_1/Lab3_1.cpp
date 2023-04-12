#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main()
{
	double x1, x2, dx, a, b, c, F = 0;
	bool con;
	setlocale(LC_ALL, "rus");
	cout << "Введите значение x1: "; cin >> x1;
	cout << "Введите значение x2: "; cin >> x2;
	cout << "Введите значение dx: "; cin >> dx;
	cout << "Введите значение a: "; cin >> a;
	cout << "Введите значение b: "; cin >> b;
	cout << "Введите значение c: "; cin >> c;

	printf("----------------------------\n");

	printf("|         x    |      F    |\n");

	printf("----------------------------\n");

	for (; x1 < x2+dx; x1 += dx)
	{
		con = false;
		if (x1 < 0 && b != 0)
		{
			F = a * pow(x1, 2) + b;
			con = true;
		}
		if (x1 > 0 && b == 0)
		{
			F = (x1 - a) / (x1 - c);
			con = true;
		}
		if (!con)
		{
			F = x1 / c;
		}
		printf("| %11.2f | %10.2f |\n", x1, F);
	}
	printf("----------------------------\n");
}
