#include<iostream>
#include<cmath>
using namespace std;

double f(int w, double z, double x) {
    z = 0;
    if (w == 1) {
        z = x;
    }
    else if (w == 2) {
        z = exp(x);
    }
    return z;
}

double one(double x, int i, double z) {
    return(pow(i, 3) * sqrt(pow(z, 3)));
}

double two(double x, int i, double z) {
    return(7 * i * abs(z));
}

double three(double x, int i, double z) {
    return(sqrt(abs(i - z)));
}

int main() {
    setlocale(LC_ALL, "");
    int i, w;
    double x, z = 0;
    cout << "Введите целое значение х= ";
    cin >> x;
    cout << "Введите целое значение i= ";
    cin >> i;

    cout << "Введите значение w=  При значении w = 1 значение х будет представленно в виде степенной функции."
        "При значении w = 2 значение х будет представленно в экспоненциальной форме. w = ";
    cin >> w;

    z = f(w, z, x);

    if (x > 0 && i % 2 == 0)
    {
        cout << "e= " << one(x, i, z);
    }
    else if (x < 0 && i % 2 != 0)
    {
        cout << "e= " << two(x, i, z);
    }
    else {
        cout << "e= " << three(x, i, z);

    }
    return 0;
}