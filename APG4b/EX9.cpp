#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;

    x++;
    cout << x << endl;
    int y = x;
    y *= (a + b);
    cout << y << endl;

    y *= y;
    cout << y << endl;

    y--;
    cout << y << endl;
}