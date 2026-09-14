#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int count = 0;

    while(1) {
        bool all_even = true;
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                all_even = false;
                break;
            }
        }
        if (!all_even) break;
        for (int i = 0; i < N; i++) {
            A[i] /= 2;
        }

        count++;
    }
    
    cout << count << endl;
}