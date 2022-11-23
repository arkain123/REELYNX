﻿#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "");	//Ввод переменных
	int kol_strings = 0;	//Количество строк
	int max_number = 0;		//Максимальный элемент матрицы
	int i_m, j_m;			//Номера максимального элемента
	int number_find = 0;	//Найдено ли максимальное число

	int m[10][10] = { {  16,  78,   0,   6, -29,  19, -52,  65, -88,  51},  //m[i][j] m[строка][столбец]
					 { -79, -22,  32, -25, -62, -69,  -2, -59, -75,  89},
					 { -87,  95, -22,  85, -49, -75,  76,  73, -59, -52},
					 {  30,  49, -28, -48,   0,  57,  -6, -85,   0, -18},
					 { -99, -21, -95,  64,  22,  -2,  69, -84,  -1, -71},
					 { -25,  47,  72,  43,  15, -44,  44,  61,   4,  74},
					 {  88, -61,   0, -64, -83,  97,   0,  90,  15,   8},
					 { -54,  99,  73,  35, -67, -87,  85, -93, -70,  10},
					 {  98,  58, -10, -29,  95,  62,  77,  89,  36, -32},
					 {  78,  60, -79, -18,  30, -13, -34, -92,   1, -38} };

	cout << "Введена двумерная матрица :" << endl;	//Начало программы, с показыванием матрицы
	cout << "m = { " << endl;
	for (int i = 0; i < 10; i++) {
		cout << "{";
		for (int j = 0; j < 10; j++) {
			cout << m[i][j] << ", ";
		}
		cout << "}" << endl;
	}
	cout << "}" << endl << endl;
	system("pause");


	for (int i = 0; i < 10; i++) {				//Ищем количество строк без нулей
		int zero = 0;
		for (int j = 0; j < 10; j++) {
			if (m[i][j] == 0) {
				zero++;
			}
		}
		if (zero == 0) {
			kol_strings++;
		}
	}

	while (number_find == 0) {						//Пока не нашли нужное число, сканируем матрицу
		max_number = m[0][0];
		for (int i = 0; i < 10; i++) {				//Ищем максимальный элемент
			for (int j = 0; j < 10; j++) {
				if (m[i][j] > max_number) {
					max_number = m[i][j];			//Запоминаем его значение 
					i_m = i;						//И номер
					j_m = j;
				}
			}
		}

		int kol_comp = 0;
		for (int i = 0; i < 10; i++) {				//Смотрим сколько раз оно встречается в матрице
			for (int j = 0; j < 10; j++) {			//(Сканируя матрицу СНОВА)
				if (m[i][j] == max_number) {
					kol_comp++;
				}
			}
		}
		if (kol_comp == 1) {						//Если число встретилось только один раз >> обнуляем его по номеру
			m[i_m][j_m] = 0;
		}
		else {
			number_find = 1;						//Иначе говорим программе, что нашли число и завершаем круг неэффективного ада
		}
	}

	//Вывод
	cout << endl;
	cout << "Количество строк, не содержащих ни одного нулевого элемента: " << kol_strings << endl;
	cout << "Максимальное из чисел, встречающихся в заданной матрице более одного раза: " << max_number << endl;
	cout << endl << endl;
}