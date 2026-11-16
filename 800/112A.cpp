#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main() {
    std::string str1;
    std::string str2;

    std::cin >> str1;
    std::cin >> str2;

    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if (str1 == str2) {
        std::cout << 0;
    } else if (str1 < str2) {
        std::cout << -1;
    } else {
        std::cout << 1;
    }

    return 0;
}