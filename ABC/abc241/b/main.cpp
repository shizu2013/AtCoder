#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int main() {
    int N, M;
    cin >> N >> M;
    vi A(N);
    vi B(M);

    for (auto& i : A) {
        cin >> i;
    }
    for (auto& i : B) {
        cin >> i;
    }
    
    bool ok = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < A.size(); j++) {
            if (A[j] == B[i]) {
                ok = 1;
                A.erase(A.begin()+j);
                break;                
            }
        }
        if (!ok) {
            cout << "No\n";
            return 0;
        }
        ok = 0;
    } 
    cout << "Yes\n";
}
