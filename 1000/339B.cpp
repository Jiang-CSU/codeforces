#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> v(m + 1);
    v[0] = 1;

    for (int i = 1; i < m + 1; i++) {
        std::cin >> v[i];
    }

    long long result = 0;
    for (int i = 0; i < m; i++) {
        if (v[i] <= v[i + 1]) {
            result += v[i + 1] - v[i];
        } else {
            result += n - (v[i] - v[i + 1]);
        }
    }

    std::cout << result;

    return 0;
}