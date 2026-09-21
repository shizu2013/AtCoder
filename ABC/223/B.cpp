#include <bits/stdc++.h>
using namespace std;

string lshift(const string& s) {
    if (s.size() == 1) return s;
    return s.substr(1) + s.substr(0, 1);
}

int main() {
    string S;
    cin >> S;

    string smax = S;
    string smin = S;
    string Ss;
    for (int i = 0; i < S.size(); i++) {
        Ss = lshift(S);
        if (Ss <= smin) {
            smin = Ss;
        }
        else if (Ss >= smax) {
            smax = Ss;
        }
        S = Ss;
        Ss = "";
    }
    cout << smin << "\n" << smax << "\n";
}
