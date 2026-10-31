#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int main() {
    cout << fixed << setprecision(12);
    int X, Y;
    cin >> X >> Y;
    int d2 = X*X+Y*Y;
    double d = d2;
    d = sqrt(d);
    double dx = X, dy = Y;
    cout << dx/d << " " << dy/d << "\n";
    return 0;
}
