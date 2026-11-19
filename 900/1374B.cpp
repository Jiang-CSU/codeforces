#include <iostream>
using namespace std;

bool isPowerOf6 (int n, int &count);
bool isPowerOf3 (int n, int &count3);

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count = 0;
        if (n == 3) {
            cout << 2 << '\n';
        } else if (n == 1) {
            cout << 0 << '\n';
        } else if (n % 6 != 0) {
            n *= 2;
            if (isPowerOf6(n, count)) {
                cout << count + 1 << '\n';
            } else {
                cout << -1 << '\n';
            }
        } else if (n % 6 == 0 && isPowerOf6(n, count)) {
            cout << count << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}

bool isPowerOf6 (int n, int &count) {
    while (n % 6  == 0) {
        n /= 6;
        count++;
    }

    int count3 = 0;
    if (isPowerOf3(n, count3)) {
        count += (count3 * 2);
        return true;
    } else {
        return false;
    }

}

bool isPowerOf3 (int n, int &count3) {
    while (n % 3 == 0) {
        n /= 3;
        count3++;
    }

    return n == 1;
}

