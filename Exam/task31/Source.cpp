/*
������� ��������� ������� � ���������� ������ ���������� �� ��� ������� � ������
*/
#include <iostream>

char** allSpaces(char a[]) { //� ������� ���������� ������� ���������
    char** array = new char* [246] { NULL }; 
    int n = 0;
    for (int i = 0; i < strlen(a); i++) { 
        if (a[i] == ' ') {
            array[n] = &a[i]; //��������� ��������� �� ������ � ������
            n++;
        }
    }
    return array; //���������� ������ ���������� �� �������
}

int main() {
    setlocale(LC_ALL, "rus");
    char line[246] = "Osbourne's excessive substance abuse led to his firing in 1979. He was replaced by former Rainbow vocalist Ronnie James Dio. Following two albums with Dio, Heaven and Hell and Mob Rules, the second of which saw drummer Vinny Appice replace Ward.";

    char** spaces = allSpaces(line); //��������� ���������� ��� �������� ������� ���������� �� �������, ������� ���������� ������� allSpaces

    std::cout << "\t������ �������� � ������\n"
        << "�������� ������: ";
    for (int i = 0; i < sizeof(line); i++) {
        std::cout << line[i];
    }
    std::cout << "\n\n������ ��������:\n";

    for (int i = 0; i < 246; i++) { //���������� �������� ������� ���������� �� �������
        if (spaces[i] == NULL) { //���� ������� ����� NULL, ������ �� ����� �� ����� ����������� ���������
            break;
        }
        std::cout << &spaces[i] << std::endl; //������� ��������� �� ������ � �������
    }

    delete[] spaces; //����������� ������, ���������� ��� ������ ���������� �� ������� � ������� ��������� delete[]
    return 0;
}