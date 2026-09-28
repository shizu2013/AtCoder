#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, A;
    cin >> N >> K >> A; 
    if ((A + K - 1) % N == 0) cout << N << "\n";
    else cout << (A + K - 1) % N << "\n";
}
