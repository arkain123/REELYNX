#include <iostream> // ���������� �����-������
#include <math.h> // ���������� ���. ��������
using namespace std; // ������������ ����

int main() {
	setlocale(LC_ALL, ""); // ������� ���� � �������
	double a, b, c;
	double S;
	cout << "������� ������ ����� a: ";
	cin >> a;
	cout << "������� ������ ����� b: ";
	cin >> b;
	cout << "������� ������ ����� c: ";
	cin >> c;

	S = 2 * (a * b + a * c + b * c); // ��������� ������� ����������� ��������������� 

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "������� ����������� ��������������� = " << S;

}