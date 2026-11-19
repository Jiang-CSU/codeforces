#include <iostream>
#include <string>

int main() {
    std::string s;

    std::cin >> s;

    int length = s.length();

    if (length < 5) {
        std::cout << "NO" << '\n';
    } else {
        std::string h = "hello";
        int indexh = 0;
        int indexs = 0;
        while (indexh < 5 && indexs < length) {
            if (s[indexs] == h[indexh]) {
                indexh++;
            } 
            indexs++;
        }

        if (indexh == 5 ) {
            std::cout <<"YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    }      

    return 0;
}