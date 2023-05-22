#include <iostream>

using namespace std;

struct student {
	char name[15];
	char surname[15];
	char middlename[15];
	int group;
	int perfomance[5];
};

void bubbleSort(student* M) {
	student tmp;

	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (M[j].group > M[j + 1].group)
			{
				tmp = M[j];
				M[j] = M[j + 1];
				M[j + 1] = tmp;
			}
		}
	}
}

void showData(student* M) {
	cout << "Отличники учебы: ";
	int kol = 0;
	for (int i = 0; i < 10; i++) {
		float avmark = (M[i].perfomance[0] + M[i].perfomance[1] + M[i].perfomance[2] + M[i].perfomance[3] + M[i].perfomance[4]) / 5;
		if (avmark > 7.5) {
			cout << M[i].surname << " - " << M[i].group << endl;
			kol++;
		}
	}
	if (kol == 0) {
		cout << "Пусто\n";
	}
}

void getData(student* M) {
	for (int i = 0; i < 10; i++) {
		system("cls");
		cout << "Ведите информацию о студенте\n";
		cout << "ИМЯ: ";
		cin.ignore();
		cin.getline(M[i].name, 15);

		cout << "ФАМИЛИЯ: ";
		cin.getline(M[i].surname, 15);

		cout << "ОТЧЕСТВО: ";
		cin.getline(M[i].middlename, 15);

		cout << "ГРУППА: ";
		cin >> M[i].group;
		cin.ignore();

		cout << "УСПЕВАЕМОСТЬ: ";
		cin >> M[i].perfomance[0]; cin.ignore();
		cin >> M[i].perfomance[1]; cin.ignore();
		cin >> M[i].perfomance[2]; cin.ignore();
		cin >> M[i].perfomance[3]; cin.ignore();
		cin >> M[i].perfomance[4]; cin.ignore();
	}
}

enum color {red, blue, green, yellow};

enum area {pacific_ocean, indian_ocean, atlantic_ocean, north_ocean};

struct birds {
	char type[20];
	float weight;
	bool waterflowing;
	float distance;
};

struct fish {
	char type[20];
	color fcolor;
	area farea;
};

struct reptiles {
	char type[20];
	char country[20];
	float length;
};

struct animalInfo {
	birds birds;
	fish fish;
	reptiles reptiles;
};

int addInfo(animalInfo* N, int num) {
	system("cls");
	cin.ignore();
	cout << "Вид птиц: ";
	cin.getline(N[num].birds.type, 20);
	cout << "Вес птиц(кг): ";
	cin >> N[num].birds.weight;
	cout << "Водоплавающие птицы?(1/0): ";
	cin >> N[num].birds.waterflowing;
	cout << "Дальность полёта птиц(м): ";
	cin >> N[num].birds.distance;

	int color;
	int area;
	cin.ignore();
	cout << "\nВид рыб: ";
	cin.getline(N[num].fish.type, 20);
point:;
	cout << "Цвет рыб(1 - Красный, 2 - Синий, 3 - Зелёный, 4 - Жёлтый): ";
	cin >> color;
	switch (color) {
	case 1:
		N[num].fish.fcolor = red;
		break;
	case 2:
		N[num].fish.fcolor = blue;
		break;
	case 3:
		N[num].fish.fcolor = green;
		break;
	case 4:
		N[num].fish.fcolor = yellow;
		break;
	default:
		goto point;
		break;
		}
point2:;
	cout << "Ареал обитания(1 - Тихий океан, 2 - Атлантический океан, 3 - Ледовитый океан, 4 - Индийский океан): ";
	cin >> area;
	switch (area) {
	case 1:
		N[num].fish.farea = pacific_ocean;
		break;
	case 2:
		N[num].fish.farea = atlantic_ocean;
		break;
	case 3:
		N[num].fish.farea = north_ocean;
		break;
	case 4:
		N[num].fish.farea = indian_ocean;
		break;
	default:
		goto point2;
		break;
	}

	cin.ignore();
	cout << "\nВид рептилий: ";
	cin.getline(N[num].reptiles.type, 20);
	cout << "Страна происхождения: ";
	cin.getline(N[num].reptiles.country, 20);
	cout << "Длинна рептилий(см): ";
	cin >> N[num].reptiles.length;
	num++;

	return num++;
}

int delInfo(animalInfo* N, int num) {
	int delnum;
	system("cls");
	cout << "Введите номер записи для удаления?: ";
	cin >> delnum;
	delnum--;
	if ((delnum + 1) > num || (delnum + 1) < 0) {
		cout << "Такой записи не существует!";
		system("pause");
	}
	else {
		N[delnum] = N[10];
		while (delnum != num) {
			N[delnum] = N[delnum + 1];
			delnum++;
		};
		num--;
		cout << "Запись успешно удалена!";
		cin;
	}
	return num;
}

void showInfo(animalInfo* N, int num) {
	for (int i = 0; i < num; i++) {
		system("cls");
		int null;
		cout << "\t\tЗапись " << i + 1;
		cout << "\n\t\tПтицы\n";
		cout << "Вид птиц: " << N[i].birds.type;
		cout << "\nВес птиц: " << N[i].birds.weight;
		cout << "\nВодоплавающие птицы: ";
		if (N[i].birds.waterflowing == true) {
			cout << "Да";
		}
		else {
			cout << "Нет";
		}
		cout << "\nДальность полета: " << N[i].birds.distance;
		cout << "\n\n\t\tРыбы\n";
		cout << "Вид рыб: " << N[i].fish.type;
		cout << "\nЦвет рыб: ";
		if (N[i].fish.fcolor == red) {
			cout << "Красный\n";
		}
		else if (N[i].fish.fcolor == blue) {
			cout << "Синий\n";
		}
		else if (N[i].fish.fcolor == green) {
			cout << "Зелёный\n";
		}
		else if (N[i].fish.fcolor == yellow) {
			cout << "Жёлтый\n";
		}
		else {
			cout << "Другой\n";
		}
		cout << "Ареал обитания: ";
		if (N[i].fish.farea == pacific_ocean) {
			cout << "Тихий океан\n";
		}
		else if (N[i].fish.farea == atlantic_ocean) {
			cout << "Атлантический океан\n";
		}
		else if (N[i].fish.farea == north_ocean) {
			cout << "Северно-Ледовитый океан\n";
		}
		else if (N[i].fish.farea == indian_ocean) {
			cout << "Индийский океан\n";
		}
		else {
			cout << "Другой океан\n";
		};
		cout << "\n\t\tРептилии\n";
		cout << "Вид рептилий: " << N[i].reptiles.type;
		cout << "\nСтрана происхождения: " << N[i].reptiles.country;
		cout << "\nДлинна: " << N[i].reptiles.length;
		cout << "\n\n\n";
		system("pause");


	};
}

int main() {
	setlocale(LC_ALL, "rus");
	int choice;
	cout << "Выберите задание для выполнения(1/2): ";
	cin >> choice;
	if (choice == 1) {
		student* M = new student[10];
		getData(M);
		bubbleSort(M);
		showData(M);
		cout << "\nНажмите любую клавишу для продолжения...";
		cin;
		delete[]M;
	}
	else if (choice == 2) {

		animalInfo* N = new animalInfo[5];
		bool run = true;
		int num = 0;

		while (run == true) {
			system("cls");
			int wish;
			cout << "(Программа хранит в себе максимум 5 записей)\n\n1.Добавить запись\n2.Удалить запись\n3.Вывести все записи\n4.Завершить программу\n\nВыберите действие: \t";
			cin >> wish;
			if (wish == 1) {
				num = addInfo(N, num);
			}
			else if (wish == 2) {
				num = delInfo(N, num);
			}
			else if (wish == 3) {
				showInfo(N, num);
			}
			else if (wish == 4) {
				run = false;
			}
		}
	}
}