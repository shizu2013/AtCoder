#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    for (string T : {"oxx", "xox", "xxo"}) {
        bool ok = true;
        for (int i = 0; i < (int)S.size(); i++) {
            if (T[i%3] != S[i]) ok = false;
        }
        if (ok) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
}
