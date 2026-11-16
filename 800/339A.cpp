#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string sum;

    std::cin >> sum;
    int len = sum.length();

    // if (len == 1) {
    //     std::cout << sum << std::endl;
    //     return 0;
    // }

    std::vector<int> v((len + 1) / 2);
    int index = 0;

    for (char c : sum) {
        if (c >= '0' && c <= '9') {
            v[index++] = c - '0';
        }
    }

    std::sort(v.begin(), v.end());

    for (int i = 0; i < index; i++) {
        std::cout << v[i];
        if (i != index - 1) {
            std::cout << '+';
        }
    }

    return 0;
}