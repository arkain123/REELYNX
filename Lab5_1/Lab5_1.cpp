#include <iostream>	
#include <math.h>

using namespace std;


/*
Ручной подсчет


Сортировка массива вручную:
{ -7.16, -4.15, -3.22, -3.20, -0.16, 0.99, 2.28, 2.88, 3.24, 7.14 - V

Сумма отрицательных:
(-7.16) + (-4.15) + (-3.22) + (-3.20) + (-0.16) = -17.89 - V

Произведение между максимальным и минимальным:
(-4.15) * (-3.22) * (-3.20) * (-0.16) * (0.99) * (2.28) * (2.88) * (3.24) = 144.10580 - V
*/

int bubble_sort(double array[], int elem) {
	for (int j = 0; j < elem-1; j++) {								//Сортировка (ПУЗЫРЬКОМ!!)
		for (int i = 0; i < elem; i++) {							//Я не умею по-другому :(
			if (array[i] > array[i + 1]) {
				double stash = array[i];
				array[i] = array[i + 1];
				array[i + 1] = stash;
			}
		}
	}
}

int neg_counting(double array[], int elem, int out) {
	for (int i = 0; i < elem; i++) {							//Считаем колличество отрицательных элементов
		if (array[i] < 0) {
			out += array[i];
		};
	};
	return out;
}

int comp_counting(double array[], int elem, int out) {
	for (int i = 1; i < elem; i++) {							//Считаем произведение по предварительно отсортированному массиву.
		out *= array[i];											//Просто считаем произведение начиная со второго элемента
	};														//оканчивая предпоследним.
}

int main() {
	setlocale(LC_ALL, ""); // русский язык в консоли
	double numbers[10] = { 3.24, -7.16, 2.28, -0.16, -3.22, 7.14, 2.88, -3.20, 0.99, -4.15 };			//Массив
	double sum_neg = 0;																					//Сумма отрицательных
	double sum_comp = 1;																				//Сумма произведения

	cout << "Задан массив { 3.24, -7.16, 2.28, -0.16, -3.22, 7.14, 2.88, -3.20, 0.99, -4.15 }" << endl;	//Начало программы, выводя массив
	system("pause");
	cout << endl << endl;

	
	numbers[10] = bubble_sort(numbers, 10);								//Сортируем
	sum_neg = neg_counting(numbers, 10, sum_neg);			//Считаем отрицательные элементы
	sum_comp = comp_counting(numbers, 10, sum_comp);       //Считаем произведение

	//Вывод
	cout << "Сумма отрицательных элементов массива: " << sum_neg << endl;		
	cout << "Произведение элементов массива, расположенных между максимальным и минимальным элементами: " << sum_comp << endl;
	cout << "Массив упорядоченный по возрастанию: " << endl;

	cout << "{ ";
	for (int i = 0; i < 10; i++) {
		cout << numbers[i] << " ";
	}
	cout << "}" << endl << endl;
};
