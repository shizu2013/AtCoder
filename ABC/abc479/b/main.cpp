#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;

int main() {
    int N;
    string S;
    cin >> N >> S;
    int ans = 0;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'R') {
            count++;
        }
        if (count > ans) {
            ans = count;
        }
        if (S[i] == 'S') count = 0;
    }
    cout << ans << "\n";
}

