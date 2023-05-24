#include <iostream>

struct Note {
	std::string data;
	Note* next;
};

struct list {
	Note* head = NULL;
	Note* tail = NULL;

	void pushfront() {
		std::cout << "Вводим строку в начало списка! " << std::endl;
		Note* ptr = new Note; std::string a;
		std::cout << "Введите строку\n" << "-> "; std::cin >> a;
		ptr->data = a;
		if (head == NULL) {
			head = ptr;
			tail = ptr;
		}
		else {
			ptr->next = head;
			head = ptr;
		}
	}

	void pushback() {
		std::cout << "Вводим строку в конец списка! " << std::endl;
		Note* ptr = new Note; std::string a;
		std::cout << "Введите строку\n" << "-> "; std::cin >> a;
		ptr->data = a;
		if (head == NULL) {
			head = ptr;
			tail = ptr;
		}
		else {
			tail->next = ptr;
			tail = ptr;
		}
	}

	void push() {
		Note* ptr = head;
		std::string a; int n, count = 0;
		std::cout << "Введите номер, после какого хотите добавить\n" << "-> "; std::cin >> n;
		std::cout << "Введите строку\n" << "-> "; std::cin >> a;
		while (count != n - 1) {
			ptr = ptr->next;
			count++;
		}
		Note* novii = new Note;
		novii->data = a;
		novii->next = ptr->next;
		ptr->next = novii;
	}
	
	void printlist() {
		int i = 0;
		if (head == NULL) {
			std::cout << "Список пуст! " << std::endl;
			return;
		}
		i++;
		for (Note* ptr = head; ptr != tail->next; ptr = ptr->next) {
			std::cout << i << ". " << ptr->data << std::endl;
			i++;
		}
		std::cout << std::endl;
	}

	void pop() {
		if (head == NULL) {
			std::cout << "Невозможно удалить, список пуст!" << std::endl;
			return;
		}
		Note* ptr = head;
		head = head->next;
		delete ptr;
		std::cout << "Первый элемент удалён!" << std::endl;
	}


	void search() {
		std::string a; int index = 0; std::cout << "Введите строку для поиска!\n" << "-> "; std::cin >> a;
		Note* ptr = head;
		while (ptr != NULL) {
			if (ptr->data == a) {
				break;
			}
			index++;
			ptr = ptr->next;
		}
		std::cout << "Данная строка под индексом: " << index + 1 << std::endl;
	}

} lst;

void startMenu() {
	int choise;
	bool loop = true;
	while (loop) {
		system("cls");
		std::cout << "\tВыберите режим работы:\n"
			<< "1. Добавить в начало списка\n"
			<< "2. Добавить в конец списка\n"
			<< "3. Добавить в середину списка\n"
			<< "4. Удалить элемент\n"
			<< "5. Найти элемент\n"
			<< "6. Показать список\n"
			<< "0. Выход\n"
			<< "-> ";
		std::cin >> choise;
		switch (choise) {
		case 1:
			system("cls");
			lst.printlist();
			lst.pushfront();
			break;
		case 2:
			system("cls");
			lst.printlist();
			lst.pushback();
			break;
		case 3:
			system("cls");
			lst.printlist();
			lst.push();
			break;
		case 4:
			system("cls");
			lst.printlist();
			lst.pop();
			system("pause");
			break;
		case 5:
			system("cls");
			lst.printlist();
			lst.search();
			system("pause");
			break;
		case 6:
			system("cls");
			lst.printlist();
			system("pause");
			break;
		case 0:
			loop = false;
			break;
		}
	};
}

int main() {
	setlocale(LC_ALL, "rus");
	startMenu();
}

//Исправить алгоритм поиска элемента