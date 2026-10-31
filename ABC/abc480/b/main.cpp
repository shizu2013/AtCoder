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
    for (auto& i : S) cin >> i;
    for (auto& i : T) cin >> i;

    vi ans_lst(N);
    for (int i = 0; i < M; i++) {
        auto it = find(S.begin(), S.end(), T[i]);

        if (it != S.end()) {
            ans_lst[it - S.begin()]++;
        } else {
            vi I;

            for (int j = 0; j < N; j++) {
                if (S[j].size() == T[i].size()) {
                    int cnt = 0;
                    for (int k = 0; k < (int)S[j].size(); k++) {
                        if (S[j][k] != T[i][k]) cnt++;
                    }
                    if (cnt == 1) I.push_back(j);
                }
            }
            if (I.size() == 1) {
                ans_lst[I[0]]++;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        cout << ans_lst[i] << "\n";
    }
    return 0;
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
