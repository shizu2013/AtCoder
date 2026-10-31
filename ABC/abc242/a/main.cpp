#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int main() {
    cout << fixed << setprecision(12);
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    if (X <= A) {
        cout << (double)1 << "\n";
    }
    else if(A+1 <= X && X <= B) {
        cout << (double)C/(B-A) << "\n";
    }
    else cout << (double)0 << "\n";
}
