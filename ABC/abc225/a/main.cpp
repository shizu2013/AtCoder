#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    set<string> ans;
    sort(S.begin(), S.end());
    for (int i = 0; i < 6; i++) {
        next_permutation(S.begin(), S.end());
        ans.insert(S);
    }
    cout << ans.size() << endl;
}
