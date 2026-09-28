#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    int X[N];
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    int count1 = 0;
    int count2 = 0;
    vector <int> ans;
    for (int i = 0; i < N; i++) {
        count1 = 0;
        for (int j = 0; j < N; j++) {
            if (i == j) {
                continue;
            }
            if (abs(X[i] - X[j]) >= D) {
                count1++; 
            }
        }
        if(count1 == N-1) {
            count2++;
            ans.push_back(i+1);
        }
    }
    if (count2 != 0) {
        cout << count2 << "\n";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans.at(i) << " ";
        }
        cout << "\n";
    }
    else {
        cout << count2 << "\n\n";
    }
}
