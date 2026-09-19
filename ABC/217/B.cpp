#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string> contest = {"ABC", "ARC", "AGC", "AHC"};
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        contest.erase(s);
    }
    cout << *contest.begin() << "\n";
    return 0;
}
