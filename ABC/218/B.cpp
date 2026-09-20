#include <bits/stdc++.h>
using namespace std;

int main() {
    int P[26];
    for (int i = 0; i < 26; i++) {
        cin >> P[i];
    }
    char Alfavet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for (int i = 0; i < 26; i++) {
        if (i == 25) {
            cout << Alfavet[P[i] - 1] << endl;
        }
        else cout << Alfavet[P[i] - 1];
    }
}
