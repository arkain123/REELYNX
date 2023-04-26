#include <iostream>
using namespace std;

struct NOTES {
	char last_name[20];
	char number[20];
	int date[3];
	int salary;
};

void out(int(&a)[10][10]) {
	cout << "Matrix: \n";
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void out(char m[]) {
	cout << "String:\n";
	cout << m;
	cout << endl << endl;
}

void out(NOTES m) {
	cout << "Structure:\n";
	cout << "Last name: " << m.last_name;
	cout << "\nNumber: " << m.number;
	cout << "\nDate: " << m.date[0] << "." << m.date[1] << "." << m.date[2];
	cout << "\nSalary: " << m.salary << "$";
	cout << endl << endl;
}

int main() {
	int d_array[10][10] = { { 16,  78,  99,   6, -29,  19, -52,  65, -88,  51},
					  {-79, -22,  32, -25, -62, -69,  -2, -59, -75,  89},
					  {-87,  95, -22,  85, -49, -75,  76,  73, -59, -52},
					  { 30,  49, -28, -48,   0,  57,  -6, -85,   0, -18},
					  {-97, -21, -95,  64,  22,  -2,  69, -84,  -1, -71},
					  {-25,  47,  72,  43,  15, -44,  44,  61,   4,  74},
					  { 88, -61,   0, -64, -83,  97,   0,  90,  15,   8},
					  {-54,  19,  73,  35, -67, -87,  85, -99, -70,  10},
					  { 98,  58, -10, -29,  95,  62,  77,  89,  36, -32},
					  { 78,  60, -79, -18,  30, -13, -34, -92,   1, -38} };
	char string[8] = "example";
	NOTES structure = { "Borodkin", "375293364801", {20, 20, 2020}, 320 };
	out(d_array);
	out(string);
	out(structure);

}

