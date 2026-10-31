#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int a, b;
    cin >> S >> a >> b;

    string A = S.substr(a-1,1);
    string B = S.substr(b-1,1);
    S.erase(a-1, 1);
    S.erase(b-2, 1);
    S.insert(a-1, B);
    S.insert(b-1, A);

    cout << S << "\n";
}
