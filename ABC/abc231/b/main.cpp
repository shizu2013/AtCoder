#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S[N];
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    map<string,int> point;
    for (int i = 0; i < N; i++) {
        point[S[i]]++;
    }
    int ans = 0;
    for (const auto& [key,value] : point) {
        if (value > ans) ans = value;
    }
    for (const auto& [key, value] : point) {
        if (value == ans) {
            cout << key << "\n";
        }
    } 
}
