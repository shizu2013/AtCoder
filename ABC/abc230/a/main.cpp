#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N >= 42) {
        cout << "AGC0" << N+1 << "\n";
    }
    else if(N < 10) {
        cout << "AGC00" << N << "\n";
    }
    else {
        cout << "AGC0" << N << "\n";
    }
}
