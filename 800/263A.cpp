#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 5;
    int matrix[n][n];

    int x, y;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                x = j;
                y = i;
            }
        }
    }

    cout << abs(x - 2) + abs(y - 2) << endl;
    return 0;
}