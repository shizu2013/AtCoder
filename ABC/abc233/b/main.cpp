#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, R;
    string S;

    cin >> L >> R >> S;
    string ReverseS = S.substr(L-1, R-L+1);
    S.erase(L-1, R-L+1);
    reverse(ReverseS.begin(), ReverseS.end());
    S.insert(L-1, ReverseS);
    cout << S << "\n";
}
