#include <iostream>
#include <string>

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

void min_max_dist(int m[]) {

	int* min = &m[0];
	int* max = &m[0];
	int max_i = 0;
	int min_i = 0;

	for (int i = 0; i < 100; i++) {
		if (m[i] > *max) {
			max = &m[i];
			max_i = i;
		}
		if (m[i] < *min) {
			min = &m[i];
			min_i = i;
		}
	};

	cout << "Расстояние между минимальным(" << *min << ") и максимальным(" << *max << ") элементом : " << abs(max_i - min_i) << endl << endl << endl;
}

void oned_to_twod(int m[], int(&m2)[10][10]) {
	int row = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			m2[row][j] = m[j + (row * 10)];
		}
		row++;
	}
}

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

void threed_build(char(&m3)[10][10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				m3[i][j][k] = (char)(rand() % 25 + 65);
			}
		}
	}
}

void every_seven(char(&m3)[10][10][10]) {
	cout << "Каждый седьмой элемент трехмерной матрицы случайных элементов от A до Z: " << endl;

	char* pointer = &m3[0][0][0];
	int num_of_q = 0;
	for (int i = 0; i < 1000; i += 7) {
		if ((i % 70) == 0) {
			cout << endl;
		}
		cout << *(pointer + i);
		if (*(pointer + i) == 'Q') {
			num_of_q++;
		}
	};
	cout << endl;
	cout << "'Q' встречалась " << num_of_q << " раз(а).";
	cout << endl << endl;
}

void words(string word) {
	int count = 0; char b[100];
	for (int i = 0; i < word.length(); i++) {
		b[i] = word[i];
	}
	for (int i = 0; i < word.length(); i++) {
		if (*(b + i + 1) == ' ') {
			cout << count + 1 << " ";
			count = 0;
		}
		else if (*(b + i) == ' ') {
			continue;
		}
		else if (i == word.length() - 1) {
			cout << count + 1 << " ";
		}
		else
			count++;
	}
}

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	int m[100] =
	{ 16,  78,  99,   6, -29,  19, -52,  65, -88,  51,
	 -79, -22,  32, -25, -62, -69,  -2, -59, -75,  89,
	 -87,  95, -22,  85, -49, -75,  76,  73, -59, -52,
	  30,  49, -28, -48,   0,  57,  -6, -85,   0, -18,
	 -97, -21, -95,  64,  22,  -2,  69, -84,  -1, -71,
	 -25,  47,  72,  43,  15, -44,  44,  61,   4,  74,
	  88, -61,   0, -64, -83,  97,   0,  90,  15,   8,
	 -54,  19,  73,  35, -67, -87,  85, -99, -70,  10,
	  98,  58, -10, -29,  95,  62,  77,  89,  36, -32,
	  78,  60, -79, -18,  30, -13, -34, -92,   1, -38 };

	int m2[10][10];
	char m3[10][10][10]; string input_word;
	getline(cin, input_word);

	matrix_out(m);
	min_max_dist(m);
	oned_to_twod(m, m2);
	zero_adresses(m2);
	threed_build(m3);
	every_seven(m3);
	words(input_word);
}