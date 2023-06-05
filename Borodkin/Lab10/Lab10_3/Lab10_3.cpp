#include <iostream>
#include <stdlib.h>

using namespace std;

#define PI 3.14159265358979323846;

double circle(double radius, double trash) {
	return radius * radius * PI;
};

double square(double side, double trash) {
	return side * side;
};

double rectangle(double first_side, double second_side) {
	return first_side * second_side;
};

double triangle(double base, double height) {
	return (base * height) / 2;
};

int main(double argc, char* argv[]) {
	setlocale(LC_ALL, "ru");
	std::cout << "\tАдреса\n";
	std::cout << argv[0] << endl;
	std::cout << argv[1] << endl;
	std::cout << argv[2] << endl;
	std::cout << argv[3] << endl;
	double result;
	double(*figures[4])(double, double) = {circle, square, rectangle, triangle};
	std::cout << "\t\tПоиск площади\nВыберите задаваемую фигуру:\nkv - Квадрат\nkr - Круг\np - Прямоугольник\nt - Треугольник\n";
	if (strcmp(argv[1], "kv") == 0) {
		std::cout << "\t\tПлощадь квадрата\n";
		result = figures[1](atof(argv[2]), atof(argv[3]));
	};
	if (strcmp(argv[1], "kr") == 0) {
		std::cout << "\t\tПлощадь круга\n";
		result = figures[0](atof(argv[2]), atof(argv[3]));
	};
	if (strcmp(argv[1], "p") == 0) {
		std::cout << "\t\tПлощадь прямоугольника\n";
		result = figures[2](atof(argv[2]), atof(argv[3]));
	};
	if (strcmp(argv[1], "t") == 0) {
		std::cout << "\t\tПлощадь треугольника\n";
		result = figures[3](atof(argv[2]), atof(argv[3]));
	}
	std::cout << "\n\nПлощадь фигуры - " << result << " м^2\n\n";
}