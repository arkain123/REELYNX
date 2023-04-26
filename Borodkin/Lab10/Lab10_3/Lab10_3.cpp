#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

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

int main() {
	setlocale(LC_ALL, "ru");
	double result;
	double var2 = 0;
	double var1 = 0;
	double(*figures[4])(double, double) = {circle, square, rectangle, triangle};
	char attribute[3];
	cout << "\t\tПоиск площади\nВыберите задаваемую фигуру:\nkv - Квадрат\nkr - Круг\np - Прямоугольник\nt - Треугольник\n";
	fgets(attribute, 3, stdin);
	system("cls");
	switch (attribute[0]) {
	case 'k':
		switch (attribute[1]) {
		case 'v':
			cout << "\t\tПлощадь квадрата\nВведите сторону квадрата\n-> ";
			cin >> var1;
			result = figures[1](var1, var2);
			break;
		case 'r':
			cout << "\t\tПлощадь круга\nВведите радиус\n-> ";
			cin >> var1;
			result = figures[0](var1, var2);
			break;
		default:
			return 0;
		}
		break;
	case 'p':
		cout << "\t\tПлощадь прямоугольника\nВведите две стороны\n1:-> ";
		cin >> var1;
		cout << "2:-> ";
		cin >> var2;
		result = figures[2](var1, var2);
		break;
	case 't':
		cout << "\t\tПлощадь треугольника\nВведите основание и высоту\nОснование:-> ";
		cin >> var1;
		cout << "Высота:-> ";
		cin >> var2;
		result = figures[3](var1, var2);
		break;
	default:
		return 0;
	}
	cout << "\n\nПлощадь фигуры - " << result << " м^2\n\n";
}