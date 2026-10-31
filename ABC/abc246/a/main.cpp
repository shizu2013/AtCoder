#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int main() {
    int X1,X2,X3,Y1,Y2,Y3,Xans,Yans;
    cin >> X1 >> Y1;
    cin >> X2 >> Y2;
    cin >> X3 >> Y3;

    if (X1 == X2) Xans = X3;
    if (X2 == X3) Xans = X1;
    if (X3 == X1) Xans = X2;

    if (Y1 == Y2) Yans = Y3;
    if (Y2 == Y3) Yans = Y1;
    if (Y3 == Y1) Yans = Y2;

    cout << Xans << " " <<Yans << "\n";
}

