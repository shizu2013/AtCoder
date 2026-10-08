#include <bits/stdc++.h>
using namespace std;

int diff(char a, char b) {
    return (a - b + 26) %26; 
}

int main() {
    string S, T;
    cin >> S >> T;
    int ans = diff(S[0], T[0]);
    for (int i = 1; i < S.size(); i++)  {
        if (diff(S[i], T[i]) !=  ans) {
            cout << "No\n";
            return 0;
        } 
    }
    cout << "Yes\n";
}
