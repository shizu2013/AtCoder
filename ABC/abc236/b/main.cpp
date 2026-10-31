#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[4*N-1];
    for(int i = 0; i < 4*N-1; i++) {
        cin >> A[i];
    }
    vector<int> B(N);
    for (int i = 0; i < 4*N-1; i++) {
        B[A[i]-1]++;
    }
    for (int i = 0; i < N; i++) {
        if (B[i] == 3) {
            cout << i+1 << "\n";
            return 0;
        }   
    }
}
