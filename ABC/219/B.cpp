#include <bits/stdc++.h>
using namespace std;

int main() {
    string S[3];
    for (int i = 0; i < 3; i++) {
        cin >> S[i];
    }
    string T;
    cin >> T;
    string ans;
    for (int i = 0; i < T.size(); i++) {
       if (T[i] == '1') { 
           ans += S[0]; 
       }
       else if (T[i] == '2') {
           ans += S[1];
       }
       else {
           ans += S[2];
       }
    }
    cout << ans << "\n";
}
