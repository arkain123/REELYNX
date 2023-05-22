#include <iostream>
#include <math.h>

using namespace std;

double equ1(double x) {
    return 2 * x - sin(5 * x);       //задаем уравнение
}

double equ2(double x) {
    return x * x * x - cos(x);       //задаем уравнение
}

double equ3(double x) {
    return x * x - sin(5 * x);       //задаем уравнение
}

double equ4(double x) {
    return 2 * sin(x) - cos(x);       //задаем уравнение
}

//double scanrange(double *p, double range[], double eps, bool sign) {
//    while (r - l > eps) {
//        double mid = (l + r) / 2;
//        if (pointers[number - 1](mid) > 0 == sign)
//            l = mid;
//        else
//            r = mid;
//    }
//    return (l + r) / 2;
//}

double mainf(double *f(double), double range[], double eps) {
    setlocale(LC_ALL, "RUS");
    double r[2] = { range[0], range[1] };
    double c = (r[0] + r[1]) / 2;
    double result = f(c);
    double result2 = f(r[0]);
    double result3 = f(r[1]);
    if ((result2 * result3) < 0) {
        while (abs(result) >= eps) {
            if ((result * result2) < 0) {
                r[1] = c;
                /*c = (range[0] + range[1]) / 2;
                result = f(c);
                result3 = f(range[1]);*/
            }
            if ((result * result3) < 0) {
                r[0] = c;
                /* = (range[0] + range[1]) / 2;
                result = f(c);
                result2 = f(range[0]);*/
            }
            c = (r[0] + r[1]) / 2;
            result = f(c);
            result2 = f(r[0]);
            result3 = f(r[1]);
        }
    }
    return c;
}
int main() {
    const double eps = 0.0001;      //задаем точность
    double range[2] = { 0.4, 1.0 }; //l = 0.4, r = 1.0;      //задаем интервал
    double (*pointers[4])(double) = { equ1, equ2, equ3, equ4 };
    double root[4] = { mainf(equ1, range, eps), mainf(equ2, range, eps), mainf(equ3, range, eps), mainf(equ4, range, eps)};
    for (int i = 0; i < 4; i++) {
        cout << "Корень уравнения " << i+1 << " = " << root[i] << endl;
    }
}