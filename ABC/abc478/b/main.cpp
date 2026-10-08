#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, V;
    cin >> N >> V;
    int W[N];
    for (int i = 0; i < N; i++) {
        cin >> W[i];
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (i != j && j != k && i != k && i + j + k + 3<= V){
                    if (W[i] + W[j] + W[k] > ans) {
                        ans = W[i] + W[j] + W[k];
                    }
                } 
            }
        }
    }
    cout << ans << "\n";
}
