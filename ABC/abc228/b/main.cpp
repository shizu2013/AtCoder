#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    int A[N];
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    bool B[100001];
    for (int i = 0; i < 100001; i++) {
        B[i] = 0;
    }

    int i = X;
    do{
        B[i] = true;
        i = A[i];
    }while(!B[i]);

    int ans = 0;
    for (int i = 1; i <= N; i++) if (B[i]) ans++;
    cout << ans << "\n";

    return 0;
}
