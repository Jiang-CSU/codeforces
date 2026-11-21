#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    int start = 0, end = n - 1;
    int taxis = 0;
    while (start <= end) {
        if (v[start] + v[end] > 4) {
            taxis++;
            end--;
        } else if (v[start] + v[end] == 4) {
            taxis++;
            start++;
            end--;
        } else if (v[start] + v[end] == 3) {
            if (v[start + 1] == 1) {
                taxis++;
                start += 2;
                end--;
            } else {
                taxis++;
                start++;
                end--;
            }
        } else {
            taxis += (end - start + 1 + 3) / 4;
            break;
        }
    }

    std::cout << taxis << '\n';
    return 0;
}