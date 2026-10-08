#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    for (int i = 0; i < 1000; i++) {
        if (X + 10*i >= Y) {
            cout << i << "\n";
            return 0;
        }
    }
}
