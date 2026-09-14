#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int sizemax = 0;
    int sizemin = 0;

    sizemax = max(A, B);
    sizemax = max(sizemax, C);
    sizemin = min(A, B);
    sizemin = min(sizemin, C);

    cout << sizemax - sizemin << endl;

}