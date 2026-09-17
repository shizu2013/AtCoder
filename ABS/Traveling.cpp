#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int t[N], x[N], y[N];
    for (int i = 0; i < N; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }
    int pt = 0;
    int px = 0;
    int py = 0;
    for (int i = 0; i < N; i++) {
        int dt = t[i] - pt;
        int dist = abs(x[i] - px) + abs(y[i] - py);
        if (dist > dt || (dt - dist) % 2 != 0) {
            cout << "No" << endl;
            return 0;
        }
        pt = t[i];
        px = x[i];
        py = y[i];
    }
    cout << "Yes" << endl;
}