#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < n; i++) {

        int total1 = 0;
        int total2 = 0;

        for (int j = 0; j <= i; j++) {
            total1 += v[j];
        }

        for (int j = i + 1; j < n; j++) {
            total2 += v[j];
        }

        if (total1 > total2) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
    
}