#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int count = 1;
    int maxCount = 1;
    for (int i = 0; i < n; i++) {
        if (i < n - 1 && v[i] <= v[i + 1]) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
            }
            count = 1;
        }
    }

    cout << maxCount << endl;
    return 0;
}