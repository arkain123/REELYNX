#include <iostream>
#include <ostream>
#include <istream>

using namespace std;

void setBinNumber(int Number) {

    char tmp;  

    string binNumber_;  

    while (Number) {
        tmp = '0' + Number % 2;
        //cout<<"tmp="<<tmp<<endl;
        binNumber_ = tmp + binNumber_;  //concatenation
        //cout<<"binNumber_="<<binNumber_<<endl;
        Number /= 2;

    }
    cout << binNumber_;
}