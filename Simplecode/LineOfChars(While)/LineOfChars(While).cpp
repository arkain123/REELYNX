#include <iostream>
using namespace std;

void line_of_chars(int num, char var, bool vert) {
	system("cls");
	int i = 0;
	while (i < num) {
		cout << var;
		if (vert) {
			cout << endl;
		};
		i++;
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	system("cls");
	int num;
	char var;
	bool vert;
	
	cout << "Введите количество символов в линии: ";
	cin >> num;
	cout << "Введите символ из которого построить линию: ";
	cin >> var;
	cout << "Линия будет вертикальной или горизонтальной? (1 - верт., 0 - гор.): ";
	cin >> vert;

	line_of_chars(num, var, vert);
}
