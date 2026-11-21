#include <iostream>
#include <string>

std::string decToBin(int n) {
    std::string res;
    bool started = false;

    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit == 1) {
            started = true;
        }

        if (started) {
            res += (bit ? '1' : '0');
        }
    }

    return res;
}

int main() {
    int x;
    std::cin >> x;

    std::string s = decToBin(x);

    int count = 0;
    for (char c : s) {
        if (c == '1') {
            count++;
        }
    }

    std::cout << count << '\n';
    return 0;

}