#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;

int main() {
    int N;
    cin >> N;
    vi A(N);
    for (auto& i : A) {
        cin >> i;
    }

    for (int i = 1; i < N; i++) {
        A[i] += A[i-1];
        if (A[i] >= 360) {
            A[i] -= 360;
        }

    }
    int ans=0;
    sort(A.begin(), A.end());
    for (int i = 0; i < N-1; i++) {
        if (abs(A[i] - A[i+1]) > ans) {
            ans = abs(A[i]- A[i+1]);
        }  
    }
    if (abs(A[0] - 0) > ans) {
        ans = A[0];
    }
    if (abs(360 - A[N-1]) > ans) {
        ans = abs(360 - A[N-1]);
    }
    cout << ans << "\n";
}
