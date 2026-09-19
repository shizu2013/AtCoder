#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<pair<string, string>> st;
    for (int i = 0; i < N; i++) {
       string sei, mei;
       cin >> sei >> mei;
       st.insert({sei, mei});
    }
    for (int i = 0; i < N; i++) {
        if (st.size() != N) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
