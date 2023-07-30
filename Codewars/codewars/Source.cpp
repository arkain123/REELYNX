#include <iostream>
#include <string>

bool solution(std::string const& str, std::string const& ending) {
    std::string buff = str;
    int lenend = ending.length();
    int lenstr = str.length();
    buff.erase(0, (lenstr - lenend));


    return ending.compare(buff) == 0 ? true : false;
}

int main() {
    std::string a = "abcde";
    std::string end = "cd";
    std::cout << solution(a, end);


}