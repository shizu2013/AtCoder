#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> ans(N);
    int i = 0;
    while(M != 0) {
        M--;
        ans[i]++;
        if(i == N-1) {
            i = 0;
        }
        else i++;
    }
    for(int j = 0; j < N; j++) {
        cout << ans[j] << "\n";
    }
}
