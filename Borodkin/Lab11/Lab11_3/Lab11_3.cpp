#include <iostream>
using namespace std;


template <typename T> double maxOfArray(T* arr, size_t n) {
    double max = 0;
    for (size_t i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int main() {
    int arr1[] = { 1, 2, 3, 4, 5, 6 };
    size_t n1 = sizeof(arr1) / sizeof(arr1[0]); //вычисляем размер массива
    double arr2[] = { 1.4, 2.5, 6.4, 3.3, 4.1, 5.4, 6.3 };
    size_t n2 = sizeof(arr2) / sizeof(arr2[0]);
    float arr3[] = { 1.4, 2.5, 6.34, 3.3, 4.1, 5.4, 6.3 };
    size_t n3 = sizeof(arr3) / sizeof(arr3[0]); 
    int max1 = maxOfArray(arr1, n1);
    double max2 = maxOfArray(arr2, n2);
    float max3 = maxOfArray(arr3, n3);
    cout << "int max = " << max1 << endl;
    cout << "double max = " << max2 << endl;
    cout << "float max = " << max3 << endl;
    system("pause");
}