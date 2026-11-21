#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> price(n);
    for (int &x : price) cin >> x;

    sort(price.begin(), price.end());

    int q;
    cin >> q;

    while (q--) {
        int m;
        cin >> m;

        cout << upper_bound(
            price.begin(), price.end(), m
        ) - price.begin() << '\n';
    }

    return 0;
}
