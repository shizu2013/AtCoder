#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int main() {
    vi a(10);
    for (auto& i : a) {
        cin >> i;
    }
    int k = 0;
    for (int i = 0; i < 3; i++){
        k = a[k];
    }
    cout << k << "\n";
}
