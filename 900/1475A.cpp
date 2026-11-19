#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    std::vector<long long> v(t);
    for (int i = 0; i < t; i++) {
        std::cin >> v[i];
    }

    for (int i = 0; i < t; i++) {
        if (v[i] % 2 != 0) {
            std::cout << "YES" << std::endl;
        } else {
            bool flag = true;

            for (long long j = 2; j * j <= v[i]; j++) {
                if (((j % 2 != 0) && (v[i] % j == 0)) ||
                    ((v[i] % j == 0) && (v[i] / j) % 2 != 0)) {
                    std::cout << "YES" << std::endl;
                    flag = false;
                    break;
                }
            }

            if (flag) {
                std::cout << "NO" << std::endl;
            }
        }
    }

    return 0;
}