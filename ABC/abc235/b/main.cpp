#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int H[N];
    for(int i = 0; i < N; i++) {
        cin >> H[i];
    }
    int now = H[0];
    for (int i = 1; i < N; i++) {
        if (H[i] > now) now = H[i];
        else break;
    }
    cout << now << "\n";
}
