#include <bits/stdc++.h>
using namespace std;

int main() {
    string X;
    cin >> X;
    if (X[0] == X[1] && X[1] == X[2] && X[2] == X[3]) {
        cout << "Weak" << endl;
        return 0;
    }

    bool is_step = true;
    for (int i = 0; i < 3; i++) {
        int current = X[i] - '0';
        int next_digit = X[i + 1] - '0';

        if (next_digit != (current + 1) % 10) {
            is_step = false;
        }
    }
    if (is_step) cout << "Weak" << endl;
    else cout << "Strong" << endl;
}