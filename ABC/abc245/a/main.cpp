#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int main() {
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    if (A<C) {
        cout << "Takahashi\n";
    }
    else if(A>C) cout << "Aoki\n";
    else{
        if(B<=D) cout << "Takahashi\n";
        else cout << "Aoki\n";
    } 
}
