#include <iostream>

// ���������� �� ����� Lomuto
int partition(int a[], int start, int end)
{
    // �������� ������� ������ ������� � �������� �������� �������� �������
    int pivot = a[end];

    // ��������, ������� ����� ��������, ����� ���������� ����� �� `pIndex`
    // �������� ������, ��� ����� ��������, ����� �������� ������ �� `pIndex`
    // ������ �������� ����� ���� � ����� �����������
    int pIndex = start;

    // ������ ���, ����� �� ������� �������, ������� ��� ������ ��������, `pIndex`
    // �������������, � ���� ������� ����� ������� ����� ������� ������.
    for (int i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            std::swap(a[i], a[pIndex]);
            pIndex++;
        }
    }

    // �������� ������� `pIndex` � �������
    std::swap(a[pIndex], a[end]);

    // ������� `pIndex` (������ �������� ��������)
    return pIndex;
}

// ��������� ������� ����������
void quickSort(int a[], int start, int end)
{
    // ������� �������
    if (start >= end) {
        return;
    }

    // ����������� �������� �� ���
    int pivot = partition(a, start, end);

    // ��������� ���������, ���������� ��������, ������� ������� �����
    quickSort(a, start, pivot - 1);

    // ��������� ���������, ���������� ��������, ����������� ����� �����
    quickSort(a, pivot + 1, end);
}

// ��������� ������ ����������� �������
void consoleOut(int a[], int length) {
    for (int i = 0; i < length; i++) {
        std::cout << a[i] << "\t";
    }
}