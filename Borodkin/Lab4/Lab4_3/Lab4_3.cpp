#include <stdio.h>;
#include <math.h>;
#include <locale>

float t(float x, float eps);
float iter(int n, float xn);

using namespace std;

int main() {
	setlocale(0, "RUS");
	setlocale(LC_NUMERIC, "C");

	float xn, xk, dx, eps, sum, f, mathf;

	printf("Введите xn: "); scanf_s("%f", &xn);
	printf("Введите xk: "); scanf_s("%f", &xk);
	printf("Введите dx: "); scanf_s("%f", &dx);
	printf("Введите eps: "); scanf_s("%f", &eps);

	printf("---------------------------------------------\n");
	printf("|    x     |        f       |     mathf     |\n");
	printf("---------------------------------------------\n");

	do {
		sum = t(xn, eps);
		f = 2 * sum;
		mathf = log((xn + 1) / (xn - 1));
		printf("| %8.3f | %14.8f | %13.8f |\n", xn, f, mathf);
		xn += dx;
	} while (xn <= xk);

	printf("---------------------------------------------\n");

	return 0;
}

float t(float xn, float eps) {
	float sum;
	float ch = 1. / xn;
	sum = ch;
	int n = 1;
	while (n < 500 && fabs(ch) > eps) {
		ch = iter(n, xn);
		sum += ch;
		n++;
	}
	return sum;
}

float iter(int n, float xn) {
	return (1. / (pow(xn + 1, 2 * n + 1) * (2 * n + 1)));
}