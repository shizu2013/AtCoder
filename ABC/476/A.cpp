#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    if (S[S.size() - 1] == 'e') {
        cout << S + 'r' << "\n";
    }
    else cout << S + 'e' + 'r' << endl;
}
