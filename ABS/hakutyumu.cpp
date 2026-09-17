#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    string divide[4] = {"dream", "dreamer", "erase", "eraser"};
    reverse(S.begin(), S.end());
    for (int i = 0 ; i < 4; i++) {
        reverse(divide[i].begin(), divide[i].end());
    }

    bool can = 1;
    int i = 0;
    while(i < S.size()) {
        bool matched = 0;
        for (string d : divide) {
            if (S.substr(i, d.size()) == d) {
                matched = true;
                i += d.size();
                break;
            }
        }

        if (!matched) {
            can = 0;
            break;
        }
    }
    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;
}