#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int ans = 1 << (5 * (A - B));
    cout << ans << endl;
}
