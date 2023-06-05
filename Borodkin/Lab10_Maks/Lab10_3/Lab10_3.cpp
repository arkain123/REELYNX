#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "rus");
    cout << argv[0] << endl;
    int count = 0;
    double sum = 0;

    for (int i = 1; i < argc; i++) {
        string arg = argv[i];

        // проверяем, является ли текущий аргумент числом 
        try {
            double num = stod(arg);
            sum += num;
            count++;
        }
        catch (const invalid_argument& e) {
            // игнорируем нечисловые аргументы 
        }
    }

    if (count > 0) {
        double avg = sum / count;
        cout << "Среднее арифметическое: " << avg << endl;
    }
    else {
        cout << "Нет числовых аргументов" << endl;
    }

    return 0;
}