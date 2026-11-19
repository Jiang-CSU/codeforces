#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;

    cin >> s;
    int length = s.size();

    int flag = true;
    for (int i = 1; i < length; i++) {
        if (islower(s[i])) {
            flag = false;
        }
    }

    if (flag && islower(s[0])) {
        cout << (char)toupper(s[0]);
        
        for (int i = 1; i < length; i++) {
            cout << (char)tolower(s[i]);
        }
        
    } else if (flag) {
        
        for (int i = 0; i < length; i++) {
            cout << (char)tolower(s[i]);
        }

    } else {
        cout << s;
    }

    return 0;
}