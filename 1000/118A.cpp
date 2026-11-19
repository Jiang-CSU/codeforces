#include <iostream>
#include <string>

int main() {
    std::string str;

    std::cin >> str;
    char vowel[] = {'A', 'O', 'Y', 'E', 'U', 'I',
                    'a', 'o', 'y', 'e', 'u', 'i'};

    for (char &c : str) {

        bool flag = false;
        for (char v : vowel) {
            if (c == v) {
                c = '0';
                flag = true;
                break;
            }
        }

        if (flag) {
            continue;
        }

        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
    }

    for (char c : str) {
        if (c != '0') {
            std::cout << '.' << c;
        }
    }

    return 0;
}