#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int main() {
    int N;
    string T;
    cin >> N >> T;

    int R = 0;
    //R=0 E R=1 S R=2 W R=4 N
    pair<int, int> XY(0, 0);

    for (int i = 0; i < N; i++) {
        if (T[i] == 'S') {
            if (R%4 == 0) {
                XY.first++;
            }
            else if(R%4 == 1) {
                XY.second--;
            }
            else if (R%4 == 2) {
                XY.first--;
            }
            else XY.second++;
        }
        if (T[i] == 'R') R++;
    }
    cout << XY.first << " " << XY.second << "\n";
}
