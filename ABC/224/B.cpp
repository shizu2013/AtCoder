#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    int A[H][W];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < H - 1; i++) {
        for (int j = 0; j < W - 1; j++) {
            if (A[i][j] + A[i+1][j+1] > A[i][j+1] + A[i+1][j]) {
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";
}
