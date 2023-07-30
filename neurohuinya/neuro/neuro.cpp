#include <iostream>
#include <string.h>
#define cls system("cls");
#define pause system("pause")

using namespace std;

bool ISWORD = false;
string WORD = "t";
string RESULT = "a";
int I = 0;

void checkResult() {
	if (RESULT == WORD) {
		ISWORD = true;
	}

	cout << RESULT << "\t" << WORD << "\t" << I << endl;

	if (RESULT == "z") throw "ERR0!";
}

void itteration() {
	while (!ISWORD) {
		I++;
		RESULT[RESULT.size() - 1] = (char)((int)RESULT[RESULT.size() - 1] + 1);
		checkResult();
	}
}


int main() {
	setlocale(LC_ALL, "ru");
	cls;
	cout << "РЕЗУЛ\tНЕОБХ\tИТТЕР\n\n";
	checkResult();
	itteration();
}
