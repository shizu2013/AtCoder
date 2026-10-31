#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int main() {
    int N;
    cin >> N;
    set<int> A;
    int a;
    for (int i = 0; i < N; i++){
        cin >> a;
        A.insert(a);
        a = 0;
    }
    cout << A.size() << "\n";
}
