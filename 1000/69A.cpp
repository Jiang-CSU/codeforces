#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(3));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < 3; j++) {

        int total = 0;
        for (int i = 0; i < n; i++) {
            total += matrix[i][j];
        }

        if (total != 0) {
            std::cout << "NO" << '\n';
            return 0;
        }
    }

    std::cout << "YES" << '\n';

    return 0;
}