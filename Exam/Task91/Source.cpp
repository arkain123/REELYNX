#include <iostream>

bool isElementInArray(int* number)
{
    int array[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    // �������� ��������� �� ������ ������� �������
    int* arr = &array[0][0];
    // �������� ��������� �� ��������� ������� �������
    int* arrEnd = &array[2][2] + 1;
    // ���������, ��������� �� ���������� ��������� ����� ������ � ��������� ���������� �������
    return number >= arr && number < arrEnd;
}

int main()
{
    int array[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int* p1 = &array[1][1];  // ��������� �� ����������� ������� �������
    int* p2 = &array[3][3];  // ��������� �� �������, ������� �� �������� ������ �������

    std::cout << std::boolalpha << isElementInArray(p1) << std::endl;  // true
    std::cout << std::boolalpha << isElementInArray(p2) << std::endl;  // false

    return 0;
}