#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int ave = 0;
    for (int i = 0; i < N; i++) {
        ave += A[i];
    }
    ave /= N;

    for (int i = 0; i < N; i++) {
        cout << abs(ave - A[i]) << endl;
    }
}