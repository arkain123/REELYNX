#include <iostream>

using namespace std;

struct COMPLEX {
	double x;
	double y;
};

struct WORKER {
	string surname;
	string post;
	int year;
	double salary;
};

void console_out(COMPLEX a) {
	cout << "Complex: "
		<< a.x << " + " << a.y << "i"
		<< endl << endl;
}

void console_out(char a) {
	cout << "Char: "
		<< a
		<< endl << endl;
}
void console_out(WORKER a) {
	cout << "\tStructure\n"
		<< "Surname: " << a.surname
		<< "\nPost: " << a.post
		<< "\nYear: " << a.year
		<< "\nSalary: " << a.salary
		<< endl << endl;
}

int main() {
	COMPLEX number = { 4, 53 };
	WORKER man = { "Tumchenko", "welder", 2017, 540 };
	char symbol = '@';
	console_out(man);
	console_out(symbol);
	console_out(number);
}