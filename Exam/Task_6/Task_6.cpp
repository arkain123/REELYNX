#include <iostream>

using namespace std;

struct NOTES {
	char name[10];
	char lastname[20];
	int salary;
};

void opositeOut(NOTES* arr) {
	for (int i = 3; i > -1; i--) {
		cout << arr[i].name << endl
			<< arr[i].lastname << endl
			<< arr[i].salary << endl
			<< endl;
	}
}

int main() {
	NOTES arr[4] = {
		{"Vlad", "Kupchik", 4},
		{"Maks", "Romanovich", 8},
		{"Dima", "Borodkin", 1},
		{"Nikita", "Matskevich", 2}
	};
	opositeOut(arr);
}