#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vi A(N);
    vi B(N);

    for (auto& i : A) {
        cin >> i;
    }
    for (auto& i : B) {
        cin >> i;
    }

    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j] && i != j) {
                count2++;
            }
        }
        if (A[i] == B[i]) {
            count1++;
        }
 
    }
    cout << count1 << "\n" << count2 << "\n";
}
