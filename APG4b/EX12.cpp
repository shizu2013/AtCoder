#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int start = 1;
    int pluscount = 0;
    int minuscount = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S.at(i) == '+') {
            start++;
        }
        if (S.at(i) == '-') {
            start--;
        }
    }
    cout << start << endl;
}