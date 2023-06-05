#include <iostream>

using namespace std;

struct NOTES {
	char name[10];
	char lastname[20];
	int salary;
};

bool equals(NOTES* first, NOTES* second) {
	if (strcmp(first->name,second->name))
		return false;
	if (strcmp(first->lastname, second->lastname))
		return false;
	if (first->salary != second->salary)
		return false;
	return true;
}

int main() {
	setlocale(LC_ALL, "rus");
	NOTES firstnote{ "Vlad", "Kupchik", 4 };
	NOTES secondnote{ "Maks", "Romanovich", 8 };
	NOTES thirdnote{ "Vlad", "Kupchik", 4 };

	cout << "\t7 задание\n"
		<< "Равны ли 1 и 2 записи: " << (equals(&firstnote, &secondnote) ? "True" : "False")
		<< "\nРавны ли 1 и 3 записи: " << (equals(&firstnote, &thirdnote) ? "True" : "False")
		<< "\nРавный ли 2 и 3 записи: " << (equals(&secondnote, &thirdnote) ? "True" : "False");
}