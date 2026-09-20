#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S, T;
    cin >> N >> S >> T;
    for (int i = 0; i < N; i++) {
        if (S[i] != T[i] && T[i] != '*') {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}
