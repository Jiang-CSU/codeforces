#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int s, n;
    std::cin >> s >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(2));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            std::cin >> matrix[i][j];
        }
    }

    std::sort(matrix.begin(), matrix.end());

    for (int i = 0; i < n; i++) {
        if (s <= matrix[i][0]) {
            std::cout << "NO" << '\n';
            return 0;
        } else {
            s += matrix[i][1];
        }
    }

    std::cout << "YES" << '\n';
    return 0;
}