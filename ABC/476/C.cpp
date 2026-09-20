#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(A[0]);
    pq.push(A[1]);

    for (int i = 2; i < N; i++) {
        pq.push(A[i]);

        if (pq.size() > 3) {
            pq.pop();
        }

        cout << pq.top() << "\n";
    }
    return 0;
}
