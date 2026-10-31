#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vi A(N);
    for (auto& i : A) {
        cin >> i;
    }
    sort(A.begin(), A.end());
    int mex = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] < mex){
            continue;
        }
        else if(A[i] > mex) {
            cout << mex << "\n";
            return 0;
        }
        else mex++;
    }
    cout << mex << "\n";
}
