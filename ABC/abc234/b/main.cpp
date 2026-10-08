#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<long long,long long>> XY(N);

    for(int i = 0; i < N; i++) {
        cin >> XY[i].first >> XY[i].second;
    }

    long long ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
                if (ans < (XY[i].first - XY[j].first) * (XY[i].first - XY[j].first) + (XY[i].second - XY[j].second) * (XY[i].second - XY[j].second)) {
                    ans = (XY[i].first - XY[j].first) * (XY[i].first - XY[j].first) + (XY[i].second - XY[j].second) * (XY[i].second - XY[j].second);
            }
        }
    }
    cout << fixed <<setprecision(10) << sqrt(ans) << "\n"; 
}
