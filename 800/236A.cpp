#include <iostream>

int main() {
    int letterCount[26] = {0};

    std::string name;
    std::cin >> name;

    for (char c : name) {
        letterCount[c - 97]++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (letterCount[i] > 0) {
            count++;
        }
    }

    if (count % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    } else {
        std::cout << "IGNORE HIM!" << std::endl;
    }
    
    return 0;
}