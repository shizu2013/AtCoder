#include <bits/stdc++.h>
using namespace std;

int main() {
    long long K, A, B;
    cin >> K >> A >> B;
    long long a, b;
    a = 0;
    b = 0;
    long long base = 1;
    // Aの変換
    while(A > 0) {
        int digit = A % 10;
        a += digit * base;
        base *= K;
        A /= 10;
    }
    base = 1;
    // Bの変換
    while (B > 0) {
        int digit = B % 10;
        b += digit * base;
        base *= K;
        B /= 10;
    }
    cout << a * b << endl;
}
