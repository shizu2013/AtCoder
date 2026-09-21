#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] < P) {
            count++;
        }
    }
    cout << count << endl;
}
