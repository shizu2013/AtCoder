#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int main() {
    ll H;
    cin >> H;
    ll ans = H*(12800000+H);
    cout << fixed << setprecision(9); 
    cout << sqrt(ans) << "\n";
}
