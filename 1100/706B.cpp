#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
    int m;
    int order;
    int index;
} Coin;

int main() {
    int n;
    cin >> n;

    vector<int> price(n);
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    int q;
    cin >> q;

    vector<Coin> coin(q);
    for (int i = 0; i < q; i++) {
        cin >> coin[i].m;
        coin[i].order = i;
    }

    sort(price.begin(), price.end());
    sort(coin.begin(), coin.end(), [](const Coin&a, const Coin&b) {
        return a.m < b.m;
    });

    if (n != 1) {

        int indexP = 0, indexC = 0;
        while (indexP < n - 1 && indexC < q) {
            if (coin[indexC].m < price[indexP]) {
                coin[indexC].index = indexP;
                indexC++;
            } else {
                if (coin[indexC].m < price[indexP + 1]) {
                    coin[indexC].index = indexP + 1;
                    indexC++;
                } else {
                    indexP++;
                }  
            }
        }

        for (int i = indexC; i < q; i++) {
            coin[i].index = n;
        }

    } else {

        for (int i = 0; i < q; i++) {
            if (coin[i].m >= price[0]) {
                coin[i].index = 1;
            } else {
                coin[i].index = 0;
            }
        }
        
    }
    

    sort(coin.begin(), coin.end(), [](const Coin& a, const Coin& b) {
        return a.order < b.order;
    });

    for (const auto &c : coin) {
        cout << c.index << '\n';
    }

    return 0;
}