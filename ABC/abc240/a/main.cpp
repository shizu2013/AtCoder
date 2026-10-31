#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;

    if (abs(a-b) == 1 || abs(a-b) == 9) {
        cout << "Yes\n";
    }
    else cout << "No\n";
}  
