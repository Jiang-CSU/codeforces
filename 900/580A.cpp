#include <iostream>
#include <vector>

using namespace std;
bool isNonDecreasing(vector<int> v, int n, int length);

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = n; i > 0; i--) {
        if (isNonDecreasing(v, n, i)) {
            cout << i;
            return 0;
        }
    }

}

bool isNonDecreasing(vector<int> v, int n, int length) {
    for (int i = 0; i < n - length + 1; i++) {
        bool flag = true;
        for (int j = i; j < i + length - 1; j++) {
            if (v[j] > v[j + 1]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            return true;
        }
    }

    return false;
}