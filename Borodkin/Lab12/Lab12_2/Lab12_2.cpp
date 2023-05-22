//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//struct NOTES {
//	string last_name;
//	string number;
//	int date[3];
//	int salary;
//
//	void vvod() {
//
//		cout << "Введите фамилию: "; cin >> last_name;
//		cout << "Введите номер телефона: "; cin >> number;
//		cout << "Введите оклад: "; cin >> salary;
//		cout << "Введите дату рождения: ";
//		for (int i = 0; i < 3; ++i) cin >> date[i];
//		cout << endl;
//	}
//
//	void vivod() {
//		cout << "Фамилия: " << last_name << endl;
//		cout << "Номер телефона: " << number << endl;
//		cout << "Оклад: " << salary << endl;
//		cout << "Дата рождения: ";
//		for (int i = 0; i < 3; ++i) cout << date[i] << " ";
//		cout << endl << endl;
//	}
//}*arr[10];
//
//void search_record() {
//
//}
//
//int main() {
//	int choise;
//	bool wish = true;
//	setlocale(LC_ALL, "rus");
//	ifstream file("E:\BNTU\REELYNX\Borodkin\Lab12\Lab12_1\2.dat", ios::binary);
//	NOTES arr1[10];
//	if (!(file.is_open())) {
//		cout << "ne otkryt";
//	}
//	else {
//		for (short int i = 0; i < 10; i++) {
//			arr[i] = new NOTES;
//			file.read((char*)*(&arr[i]), sizeof(NOTES));
//			arr1[i] = *arr[i];
//		}
//	}
//}

#include <iostream>
#include <fstream>
#include <Windows.h>
#define cls system("cls")
#define pause system("pause")

using namespace std;


struct NOTES {
	string last_name;
	string number;
	int date[3];
	int salary;

	void vivod() {
		cout << "Фамилия: " << last_name << endl;
		cout << "Номер телефона: " << number << endl;
		cout << "Оклад: " << salary << endl;
		cout << "Дата рождения: ";
		for (int i = 0; i < 3; ++i) cout << date[i] << " ";
		cout << endl << endl;
	}
} *arr[10];

void translate(NOTES arr[], int size, int array[]) {
    for (int i = 0; i < 10; ++i) {
        array[i] = (2023 - arr[i].date[2]) * 365 + (12 - arr[i].date[1]) * 30 + (31 - arr[i].date[0]);
    }
}


void insertionSort(NOTES list[], int listLength, int answer, int array[])
{
    int count = 0;
    for (int i = 1; i < listLength; i++)
    {
        int j = i - 1;
        if (answer == 1) {
            while (j >= 0 && (int)(list[j].last_name[0]) > (int)(list[j + 1].last_name[0]))
            {
                swap(list[j], list[j + 1]);
                count++;
                j--;
            }
        }
        else if (answer == 2) {
            while (j >= 0 && (int)(list[j].number[0]) > (int)(list[j + 1].number[0]))
            {
                swap(list[j], list[j + 1]);
                count++;
                j--;
            }
        }
        else if (answer == 4) {
            while (j >= 0 && (int)(list[j].salary) > (int)(list[j + 1].salary))
            {
                swap(list[j], list[j + 1]);
                count++;
                j--;
            }
        }
        else if (answer == 3) {
            translate(list, 10, array);
            while (j >= 0 && array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                swap(list[j], list[j + 1]);
                count++;
                j--;
            }
        }
    }
}


void all_out(NOTES arr[]) {
    for (int i = 0; i < 10; ++i) arr[i].vivod();
}



void search(NOTES arr[], int size, int answer) {
    setlocale(LC_ALL, "rus");
    string a;
    int b;
    if (answer == 1) {
        cout << "Введите фамилию для поиска: " << endl; cin >> a;
        for (int i = 0; i < size; ++i) {
            if (a == arr[i].last_name) {
                arr[i].vivod();
                break;
            }
        }
    }
    else if (answer == 2) {
        cout << "Введите номер для поиска: " << endl; cin >> a;
        for (int i = 0; i < size; ++i) {
            if (a == arr[i].number) {
                arr[i].vivod();
                break;
            }
        }
    }
    else if (answer == 4) {
        cout << "Введите оклад для поиска: " << endl; cin >> b;
        for (int i = 0; i < size; ++i) {
            if (b == arr[i].salary) {
                arr[i].vivod();
                break;
            }
        }
    }
    else if (answer == 3) {
        cout << "Введите дату для поиска: " << endl; int DATA[3];
        for (int i = 0; i < 3; ++i) cin >> DATA[i];
        for (int i = 0; i < size; ++i) {
            if (DATA[0] == arr[i].date[0] && DATA[1] == arr[i].date[1] && DATA[2] == arr[i].date[2]) {
                arr[i].vivod();
                break;
            }
        }
    }
}

void binarySearch(NOTES arr[], int listlength, int answer, int array[]) {
    int left = 0, right = listlength - 1, count = 0, Date[3];
    string a;
    int b;
    switch (answer) {
    case 1:
        cout << "Введите фамилию для поиска: " << endl; cin >> a;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid].last_name == a) {
                arr[mid].vivod();
                count++;
                break;
            }
            else if (arr[mid].last_name[0] < a[0]) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        break;
    case 2:
        cout << "Введите номер для поиска: " << endl; cin >> a;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid].number == a) {
                arr[mid].vivod();
                count++;
                break;
            }
            else if (arr[mid].number[0] < a[0]) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        break;
    case 4:
        cout << "Введите оклад для поиска: " << endl; cin >> b;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid].salary == b) {
                arr[mid].vivod();
                count++;
                break;
            }
            else if (arr[mid].salary < b) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        break;
    case 3:
        cout << "Введите дату рождения для поиска: " << endl;
        for (int i = 0; i < 3; ++i) cin >> Date[i];
        int schet = (2023 - Date[2]) * 365 + (12 - Date[1]) * 30 + 31 - Date[0];
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (array[mid] == schet) {
                arr[mid].vivod();
                count++;
                break;
            }
            else if (array[mid] < schet) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        break;
    }


    if (count == 0) cout << "Введённый элемент не найден! " << endl;

}

void search_record(int array[], NOTES arr[]) {
    int answer, choice, count = 0; bool run = true;
    while (run) {
        cout << "Хотите отсортировать массив? \n1 - Да \n2 - Нет \n3 - Посмотреть массив" << endl; cin >> answer;
        if (answer == 1) {
            cout << "Выберите поле для сортировки: 1 - фамилия, 2 - номер, 3 - дата рождения, 4 - оклад" << endl;
            cin >> choice;
            insertionSort(arr, 10, choice, array);
            binarySearch(arr, 10, choice, array);
        }
        else if (answer == 2) {
            cout << "Выберите поле для сортировки: 1 - фамилия, 2 - номер, 3 - дата рождения, 4 - оклад" << endl;
            cin >> choice;
            search(arr, 10, choice);
        }
        else if (answer == 3) all_out(arr);
        else run = false;
        pause; cls;
    }
}


int main() {
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    int array[10];
    ifstream file("E:/BNTU/REELYNX/Borodkin/Lab12/Lab12_1/2.dat", ios::binary);
    NOTES arr1[10];
    if (!(file.is_open())) {
        cout << "ne otkryt";
    }
    else {
        for (short int i = 0; i < 10; i++) {
            arr[i] = new NOTES;
            file.read((char*)*(&arr[i]), sizeof(NOTES));
            arr1[i] = *arr[i];
        }
    }
    search_record(array, arr1);
}