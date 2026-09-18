#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N <= 125) {
        cout << "4" << endl;
    }
    else if (N >= 126 && N <= 211) {
        cout << "6" << endl;
    }
    else if (N >= 212){
        cout << "8" << endl;
    }
}

