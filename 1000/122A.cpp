#include <iostream>

bool isLucky(int);

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && isLucky(i)) {
            std::cout << "YES" << '\n';
            return 0;
        }
    }

    std::cout << "NO" << '\n';

    return 0;
}

bool isLucky(int n) {

    while (n > 0) {
        int res = n % 10;
        n /= 10;
        if (res != 7 && res != 4) {
            return false;
        }
    }

    return true;
}