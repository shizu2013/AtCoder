#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;
    vector<int> adig(0);
    vector<int> bdig(0);
    while (A > 0) {
        int digit = A%10;
        adig.push_back(digit);

        A/=10;
    }
    while(B > 0) {
        int digit=B%10;
        bdig.push_back(digit);
        B/=10;
    }

    for (int i = 0; i < adig.size(); i++) {
        if (adig[i] + bdig[i] >= 10) {
            cout << "Hard\n";
            return 0;
        }
    }
    cout << "Easy\n"; 
}
