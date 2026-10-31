#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;
using vs = vector<string>;
using vvs = vector<vector<string>>;
using pii = pair<int, int>;
using vvd = vector<vector<double>>;

void dfs(int v, const vvi& graph, vector<bool>& visited);
void dfs_stack(int start, const vvi& graph, vector<bool>& visited);
vector<int> bfs_dist(int start, const vvi& graph);

vvd multiply (const vvd& A, const vvd& B) {
    int l = A.size();
    int m = A[0].size();
    int n = B[0].size();

    vvd C(l, vector<double>(n,0.0));

    for (int i = 0; i < l; i++) {
        for (int k = 0; k < m; k++) {
            for (int j = 0; j < n; j++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

int main() {
    cout << fixed << setprecision(20);
    int a, b, d;
    cin >> a >> b >> d;
    double redian = d * numbers::pi / 180;
    double X = a*cos(redian)-b*sin(redian);
    double Y = a*sin(redian)+b*cos(redian);
    cout << X << ' ' << Y << '\n';
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
