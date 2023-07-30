#include <iostream>

bool isElementInArray(int* number)
{
    int array[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    // получаем указатель на первый элемент массива
    int* arr = &array[0][0];
    // получаем указатель на последний элемент массива
    int* arrEnd = &array[2][2] + 1;
    // проверяем, находится ли переданный указатель между первым и последним элементами массива
    return number >= arr && number < arrEnd;
}

int main()
{
    int array[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int* p1 = &array[1][1];  // указатель на центральный элемент массива
    int* p2 = &array[3][3];  // указатель на элемент, который не является частью массива

    std::cout << std::boolalpha << isElementInArray(p1) << std::endl;  // true
    std::cout << std::boolalpha << isElementInArray(p2) << std::endl;  // false

    return 0;
}