#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    int A[H][W];
    for (auto& i : A) {
        for(auto& j : i) {
            cin >> j;
        }
    }

    int B[W][H];

    for (int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            B[j][i] = A[i][j];
        }
    }

    for (int i = 0; i < W; i++){
        for(int j = 0; j < H; j++) {
            if (j == H-1) {
                cout << B[i][j] << "\n";
                continue;
            }
            cout << B[i][j] << " ";
        }
    }
}
