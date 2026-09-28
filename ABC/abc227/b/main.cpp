#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int S[N];
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    
    int ans = 0;
    bool ok = 0;
    for (int i = 0; i < N; i++) {
        for (int a = 1; a < S[i]; a++) {
            for (int b = 1; b < S[i]; b++) {
                if (4*a*b + 3*a + 3*b == S[i]) {
                    ok = 1;
                }
            }
        }
        if (!ok) {
            ans++;
        }
        ok = 0;
    
    }
    cout << ans << "\n";
}
