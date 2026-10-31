#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;
using vs = vector<string>;
void dfs(int v, const vvi& graph, vector<bool>& visited);
void dfs_stack(int start, const vvi& graph, vector<bool>& visited);
vector<int> bfs_dist(int start, const vvi& graph);

int main() {
        int N, M;
        cin >> N >> M;
        vs S(N);
        vs T(M);
        for (auto& i : S) {
            cin >> i;
        }
        for (auto& i : T) {
            cin >> i;
        }
        map<string, int> vote;
        for (int i = 0; i < N; i++) {
            vote[S[i]] = 0;
        }
        cout << "a\n"; //test
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {    
                int count = 0;
                cout << j << "\n";
                for (int k = 0; k < T[j].size(); k++) {
                    if (S[i][k] != T[j][k]) count++;
                }
                if (count < 2) {
                    vote[S[i]]++;
                }
                count = 0;
            }
        }
    for (int i = 0; i < N; i++) {
        cout << vote[S[i]] << "\n";
    }
}






// ============Template============



// reference: https://github.com/shizu2013/AtCoder-My-Liblary/blob/main/DFS.cpp
void dfs(int v, const vvi& graph, vector<bool>& visited) {
    visited[v] = true;
    for (int nv : graph[v]) {
        if (visited[nv]) continue;
        dfs(nv, graph, visited);
    }
}

// reference: https://github.com/shizu2013/AtCoder-My-Liblary/blob/main/DFS-stack.cpp
void dfs_stack(int start, const vvi& graph, vector<bool>& visited) {
    stack<int> st;
    st.push(start);
    visited[start] = true;

    while (!st.empty()) {
        int v = st.top();
        st.pop();
        for (int nv : graph[v]) {
            if (visited[nv]) continue;
            visited[nv] = true;
            st.push(nv);
        }
    }
}

// reference: https://github.com/shizu2013/AtCoder-My-Liblary/blob/main/BFS.cpp
vector<int> bfs_dist(int start, const vvi& graph) {
    int n = static_cast<int>(graph.size());
    vector<int> dist(n, -1);
    queue<int> que;

    dist[start] = 0;
    que.push(start);
    while (!que.empty()) {
        int v = que.front();
        que.pop();
        for (int nv : graph[v]) {
            if (dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
    return dist;
}
