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
    int ans = 0;
    for (int i = 0; i < N; i+=2) {
        ans+=A[i];
    }
    cout << ans << "\n";
}

