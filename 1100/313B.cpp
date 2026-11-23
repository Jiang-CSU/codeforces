#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> v(s.size());
    v[0] = 0;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            v[i] = v[i - 1] + 1;
        } else {
            v[i] = v[i - 1];
        }
    }

    int m;
    cin >> m;

    while (m--) {
        int l, r;
        cin >> l >> r;

        // if (r - l > 1) {
        cout << v[r - 1] - v[l - 1] << '\n';
        // } else {
        //     cout << (s[r - 1] == s[l - 1]) << '\n';
        // }
    }

    return 0;
}