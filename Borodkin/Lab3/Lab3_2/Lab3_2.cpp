#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double xn, xk, dx, eps, x, mathf;
	int a, b;
	cout << "Введите начало интервала: ";
	cin >> xn;
	cout << "Введите конец интервала: ";
	cin >> xk;
	cout << "Введите шаг: ";
	cin >> dx;
	cout << "Введите точность (число и степень, в которую возводится 10): \n";
	cin >> a >> b;
	eps = a * pow(10, b);

	double ch, sum, F, n;
	x = xn;
	if (abs(x) > 1)
	{
		printf("----------------------------------------------------------\n");
		printf("|     x     |       f       |      n     |      mathf    |\n");
		printf("----------------------------------------------------------\n");

		while (x < xk - dx)
		{
			ch = 1 / x;
			sum = ch;
			n = 1;
			while (n < 500 && fabs(ch) > eps)
			{
				ch *= 1 / ((2 * n + 1) * pow(x, 2 * n + 1));
				sum += ch;
				n++;
			}
			x += dx;
			F = 2 * sum;
			mathf = log((x + 1) / (x - 1));
			printf("| %8.3f | %14.8f | %9.0f | %13.8f |\n", x, F, n, mathf);
		}
		printf("----------------------------------------------------------");
	}
	else cout << "Невозможно найти значение данной функции, так как х не принадлежит ОДЗ";
	return 0;
}
