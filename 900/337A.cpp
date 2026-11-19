#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> v(m);

    for (int i = 0; i < m; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    int minimum = 1000;
    for (int i = 0; i < m - n + 1; i++) {
        int dis = v[i + n - 1] - v[i];

        if (dis < minimum) {
            minimum = dis;
        }
    }

    std::cout << minimum << '\n';

    return 0;
}