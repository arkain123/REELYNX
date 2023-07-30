/*
Функция принимает строчку и возвращает массив указателей на все пробелы в строке
*/
#include <iostream>

char** allSpaces(char a[]) {				//функция поиска пробелов в строке и возвращение массива указателей на эти пробелы
	char* array[246] = { NULL };
	int n = 0;
	for (int i = 0; i < strlen(a); i++) { //перебираем символы в строке до конца строки 
		if (a[i] == ' ') {
			array[n] = &a[i]; //сохраняем указатель на пробел в массив
			n++;
		}
	}
	return array; //возвращаем массив указателей на пробелы
}

int main() {
	char line[246] = "Osbourne's excessive substance abuse led to his firing in 1979. He was replaced by former Rainbow vocalist Ronnie James Dio. Following two albums with Dio, Heaven and Hell and Mob Rules, the second of which saw drummer Vinny Appice replace Ward.";
	
	char** spaces = allSpaces(line); //объявляем переменную для хранения массива указателей на пробелы, которую возвращает функция allSpaces


	for (int i = 0; i < 246; i++) { //перебираем элементы массива указателей на пробелы
		if (spaces[i] == NULL) { //если элемент равен NULL, значит мы дошли до конца заполненных элементов
			break;
		}
		std::cout << spaces[i] << std::endl; //выводим указатель на пробел в консоль
	}
	return 0;
}