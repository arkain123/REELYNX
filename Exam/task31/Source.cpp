/*
‘ункци€ принимает строчку и возвращает массив указателей на все пробелы в строке
*/
#include <iostream>

char** allSpaces(char a[]) { //в функции используем двойной указатель
    char** array = new char* [246] { NULL }; 
    int n = 0;
    for (int i = 0; i < strlen(a); i++) { 
        if (a[i] == ' ') {
            array[n] = &a[i]; //сохран€ем указатель на пробел в массив
            n++;
        }
    }
    return array; //возвращаем массив указателей на пробелы
}

int main() {
    setlocale(LC_ALL, "rus");
    char line[246] = "Osbourne's excessive substance abuse led to his firing in 1979. He was replaced by former Rainbow vocalist Ronnie James Dio. Following two albums with Dio, Heaven and Hell and Mob Rules, the second of which saw drummer Vinny Appice replace Ward.";

    char** spaces = allSpaces(line); //объ€вл€ем переменную дл€ хранени€ массива указателей на пробелы, которую возвращает функци€ allSpaces

    std::cout << "\tјдреса пробелов в строке\n"
        << "»сходна€ строка: ";
    for (int i = 0; i < sizeof(line); i++) {
        std::cout << line[i];
    }
    std::cout << "\n\nјдреса пробелов:\n";

    for (int i = 0; i < 246; i++) { //перебираем элементы массива указателей на пробелы
        if (spaces[i] == NULL) { //если элемент равен NULL, значит мы дошли до конца заполненных элементов
            break;
        }
        std::cout << &spaces[i] << std::endl; //выводим указатель на пробел в консоль
    }

    delete[] spaces; //освобождаем пам€ть, выделенную под массив указателей на пробелы с помощью оператора delete[]
    return 0;
}