#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    }

    int result = 0;
    int minimum;
    int index;
    for (int i = 0; i < k; i++) {
        result += v[i];
    }
    minimum = result;
    index = 1;

    for (int i = k; i < n; i++) {
        result = result - v[i - k] + v[i];

        if (result < minimum) {
            minimum = result;
            index = i - k + 2;
        }
    }

    cout << index << '\n';
    return 0;

}