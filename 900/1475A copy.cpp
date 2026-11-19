#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    // 如果是偶数，就一直除以 2
    while (n % 2 == 0) {
        n /= 2;
    }
    
    // 如果最后剩下来的数大于 1，说明它包含大于 1 的奇数因数
    if (n > 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // 加快输入输出，防止输入输出超时
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}