#include <iostream>
#include <string>
using namespace std;

void count_frequence(int alphabet[], string text) {
	for (int i = 0; i < size(text); i++) {
		if (isupper(text[i])) {
			alphabet[((int)text[i]) - 65]++;
		}
		else {
			alphabet[((int)text[i]) - 97]++;
		}
	}
}

void hack(){
	double deff = 0.25; //Допустимое отклонение
}

int main() {
	system("cls");
	setlocale(LC_ALL, "rus");

	string input_text;
	getline(cin, input_text);
	int alphabet[26];
	for (int i = 0; i < 26; i++) {
		alphabet[i] = 0;
	}

	count_frequence(alphabet, input_text);

	for (int i = 0; i < 26; i++) {
		cout << ((char)(i + 65)) << ": " << alphabet[i] << endl;
	}

}