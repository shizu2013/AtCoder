#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int Ac[N];
    for (int i = 0; i < N; i++) {
        Ac[i] = A[i];
    }
    sort(A, A+N);
    reverse(A, A+N);
    int booby = A[1];
    for (int i = 0; i < N; i++) {
        if (Ac[i] == booby) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
