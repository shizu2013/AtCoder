#include <bits/stdc++.h>
using namespace std;

int main() {
    string S1,S2;
    cin >> S1 >> S2;
    if (S1 == ".#" && S2 == "#.") cout << "No\n";
    else if(S1 == "#." && S2 == ".#") cout << "No\n";
    else cout << "Yes\n";
}
