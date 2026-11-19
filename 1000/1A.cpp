#include <iostream>

int main() {
    int n, m, a;
    std::cin >> n >> m >> a;

    long long N;
    long long M;
    if (n % a == 0) {
        N = n / a;
    } else {
        N = n / a + 1;
    }

    if (m % a == 0) {
        M = m / a;
    } else {
        M = m / a + 1;
    }

    long long result = N * M;
        
    std::cout << result << '\n';

    return 0;
}