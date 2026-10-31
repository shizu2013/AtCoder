#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;
using vs = vector<string>;
using vvs = vector<vector<string>>;
using pii = pair<int, int>;

void dfs(int v, const vvi& graph, vector<bool>& visited);
void dfs_stack(int start, const vvi& graph, vector<bool>& visited);
vector<int> bfs_dist(int start, const vvi& graph);

int main() {
    int H, W;
    cin >> H >> W;
    vs S(H);
    pii xy1 = {-1, -1};
    pii xy2 = {-1, -1};
    for (int i = 0; i < H; i++) {
        cin >> S[i];
        for (int j = 0; j < W; j++) {
            if (S[i][j] == 'o' && xy1.first == -1) {
                xy1.first = i;
                xy1.second = j;
            }
            else if(S[i][j] == 'o') {
                xy2.first = i;
                xy2.second = j;
            }
        }
    }
    cout << abs(xy2.first - xy1.first) + abs(xy2.second - xy1.second) << "\n";
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
// reference: https://github.com/shizu2013/AtCoder-My-Liblary/blob/main/BFS_grid.cpp
vvi bfs_grid(const vector<string>& grid, pii start) {
    int R = grid.size();
    int C = grid[0].size();

    vvi dist(R, vector<int>(C, -1));
    queue<pii> que;

    int sy = start.first;
    int sx = start.second;

    dist[sy][sx] = 0;
    que.push({sy, sx});

    int dy[] = {-1, 1, 0, 0};
    int dx[] = {0, 0, -1, 1};

    while (!que.empty()) {
        auto [y, x] = que.front();
        que.pop();

        for (int d = 0; d < 4; d++) {
            int ny = y + dy[d];
            int nx = x + dx[d];

            // グリッドの範囲外
            if (ny < 0 || ny >= R || nx < 0 || nx >= C) continue;

            // 壁
            if (grid[ny][nx] == '#') continue;

            // 訪問済み
            if (dist[ny][nx] != -1) continue;

            dist[ny][nx] = dist[y][x] + 1;
            que.push({ny, nx});
        }
    }

    return dist;
}
