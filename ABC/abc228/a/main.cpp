#include <bits/stdc++.h>
using namespace std;

int main() {
    int S, T, X;
    cin >> S >> T >> X;

    if (S > T){
        if (S <= X || X < T) {
            cout << "Yes\n";
        }
        else cout << "No\n";
        return 0;
    }

    if (S <= X && X < T) cout << "Yes\n";
    else cout <<"No\n";
}
