#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    cin >> str;

    int length = str.length();

    for (int i = 0; i < length - 2; i++) {
        if (str[i] == 'W' &&
            str[i + 1] == 'U' &&
            str[i + 2] == 'B') {

            str[i] = '0';
            str[i + 1] = '0';
            str[i + 2] = '0';
        }
    }

    for (int i = 0; i < length; i++) {
        if (str[i] != '0') {
            cout << str[i];
        } else if (i > 0 && str[i] == '0' && str[i - 1] != '0') {
            cout << ' ';
        }
    }

    return 0;
}