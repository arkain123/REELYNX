#include <iostream>

using namespace std;

CONST double π = 3.1415926535;
void volume(double radius) {
	cout << (π * pow(radius, 3) * 4) / 3 << endl;
	system("pause");
}

void volume(double radius, double height) {
	cout << (π * pow(radius, 2) * height) / 3 << endl;
	system("pause");
}

void volume(double length, double width, double height) {
	cout << length * width * height << endl;
	system("pause");
}

int main() {
	setlocale(LC_ALL, "rus");
	int figure;
	bool wish = true;

	while (wish) {
		system("cls");
		double length, height, width, radius;
		cout << "Выберите фигуру (1 - Шар, 2 - Конус, 3 - Прямоугольный параллелепипед, 0 - Выход)\n->";
		cin >> figure;
		switch (figure) {
		case 0:
			wish = false;
			break;
		case 1:
			system("cls");
			cout << "Введите радиус шара:\n->";
			cin >> radius;
			volume(radius);
			break;
		case 2:
			system("cls");
			cout << "Введите радиус основания конуса:\n->";
			cin >> radius;
			cout << "Введите высоту конуса:\n->";
			cin >> height;
			volume(radius, height);
			break;
		case 3:
			system("cls");
			cout << "Введите длину параллелепипеда:\n->";
			cin >> length;
			cout << "Введите ширину параллелепипеда:\n->";
			cin >> width;
			cout << "Введите высоту параллелепипеда:\n->";
			cin >> height;
			volume(length, width, height);
			break;
		}
	}
}