#include <iostream>

using namespace std;

void matrix_out(int m[]) {
	int space = 0;
	for (int j = 0; j < 100; j++) {
		space++;
		cout << m[j] << "\t";
		if (space >= 10) {
			space = 0;
			cout << endl;
		}
	}
	cout << endl << endl;
}

int oned_to_twod(int m[], int** m2, int rows, int columns) {
	int row = 0;
	int column = 0;
	for (int i = 0; i < (rows * columns * rows); i++) {
		if (row == rows) {
			return 0;
		};
		if ((row * columns) + column > 99) {
			m2[row][column] = 0;
		}
		else {
			m2[row][column] = m[(row * columns) + column];
		}
		column++;
		if (column == columns + 1) {
			row++;
			column = 0;
		};
	}
}

/*
void zero_adresses(int(&m2)[10][10]) {
	cout << "Адреса нулевых элементов двумерной матрицы: " << endl;
	int n = 0;
	int* pointer;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (m2[i][j] == 0) {
				pointer = &m2[i][j];
				cout << pointer << endl;
			}
		}
	}
	cout << endl << endl;
}
*/

int main() {
	setlocale(LC_ALL, "ru");
	system("cls");
	int m[100] = { 16,  78,  99,   6, -29,  19, -52,  65, -88,  51,
				  -79, -22,  32, -25, -62, -69,  -2, -59, -75,  89,
				  -87,  95, -22,  85, -49, -75,  76,  73, -59, -52,
				   30,  49, -28, -48,   0,  57,  -6, -85,   0, -18,
				  -97, -21, -95,  64,  22,  -2,  69, -84,  -1, -71,
				  -25,  47,  72,  43,  15, -44,  44,  61,   4,  74,
				   88, -61,   0, -64, -83,  97,   0,  90,  15,   8,
				  -54,  19,  73,  35, -67, -87,  85, -99, -70,  10,
				   98,  58, -10, -29,  95,  62,  77,  89,  36, -32,
				   78,  60, -79, -18,  30, -13, -34, -92,   1, -38 };

	matrix_out(m);
	int rows, columns;
	cout << "Введите размерность нового массива >" << endl;
	cout << "i: ";
	cin >> rows;
	cout << "j: ";
	cin >> columns;
	int** m2;
	m2 = new int* [rows];
	for (int i = 0; i < rows; i++) {
		m2[i] = new int[columns];
	}
	oned_to_twod(m, m2, rows, columns);
	
	for (int i = 0; i < (rows); i++) {
		for (int j = 0; j < (columns); j++) {
			cout << m2[i][j] << "\t";
		}
		cout << endl;
	}
}