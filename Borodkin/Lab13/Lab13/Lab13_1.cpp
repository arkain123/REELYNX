#include <iostream>

using namespace std;

void stackAdd(double stack[], int* i) {
    system("cls");
    if (*i == 20) {
        cout << "Стек переполнен!\n";
    }
    else {
        (*i)++;
        cout << "Введите элемент:\n->";
        cin >> stack[*i];
    }
    system("pause");
}

void stackDelete(double stack[], int* i) {
    system("cls");
    if (*i == -1) {
        cout << "Стек пуст!\n";
    }
    else {
        (*i)--;
        cout << "Элемент удалён!\n";
    }
    system("pause");
}

void stackView(double stack[], int i) {
    system("cls");
    for (int j = 0; j <= i; j++)
        cout << j << ". " << stack[j] << endl;
    system("pause");
}

void stackStart() {
    double stack[20];
    int i = -1;
    int choise;
    bool wish = true;
    while (wish) {
        system("cls");
        cout << "\tВыберите действие\n"
            << "1. Добавить элемент в стек\n"
            << "2. Удалить элемент из стека\n"
            << "3. Вывести стек\n"
            << "0. Завершить программу\n\n"
            << "->";
        cin >> choise;
        switch (choise) {
        case 1:
            stackAdd(stack, &i);
            break;
        case 2:
            stackDelete(stack, &i);
            break;
        case 3:
            stackView(stack, i);
            break;
        case 0:
            wish = false;
            break;
        }
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    stackStart();
}