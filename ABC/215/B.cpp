#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    cout << bit_width((unsigned long long)N) - 1 << "\n";
    return 0;
}
