#include <iostream>

// Разделение по схеме Lomuto
int partition(int a[], int start, int end)
{
    // Выбираем крайний правый элемент в качестве опорного элемента массива
    int pivot = a[end];

    // элементы, меньшие точки поворота, будут перемещены влево от `pIndex`
    // элементы больше, чем точка поворота, будут сдвинуты вправо от `pIndex`
    // равные элементы могут идти в любом направлении
    int pIndex = start;

    // каждый раз, когда мы находим элемент, меньший или равный опорному, `pIndex`
    // увеличивается, и этот элемент будет помещен перед опорной точкой.
    for (int i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            std::swap(a[i], a[pIndex]);
            pIndex++;
        }
    }

    // поменять местами `pIndex` с пивотом
    std::swap(a[pIndex], a[end]);

    // вернуть `pIndex` (индекс опорного элемента)
    return pIndex;
}

// Процедура быстрой сортировки
void quickSort(int a[], int start, int end)
{
    // базовое условие
    if (start >= end) {
        return;
    }

    // переставить элементы по оси
    int pivot = partition(a, start, end);

    // повторяем подмассив, содержащий элементы, меньшие опорной точки
    quickSort(a, start, pivot - 1);

    // повторяем подмассив, содержащий элементы, превышающие точку опоры
    quickSort(a, pivot + 1, end);
}

// Процедура вывода одномерного массива
void consoleOut(int a[], int length) {
    for (int i = 0; i < length; i++) {
        std::cout << a[i] << "\t";
    }
}