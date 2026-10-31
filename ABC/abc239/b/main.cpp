#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int digit (ll N) {
    ll x = N % 10;
    return x;
}

int main() {
    ll X;
    cin >> X;

    if (X >= 0)cout << X/10 << "\n";
    else if (digit(X) != 0)cout << X/10 - 1 << "\n";
    else cout << X/10 << "\n";
}
