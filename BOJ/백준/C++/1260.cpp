#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int n, m, v;
vector<int> adj[1001];
bool isVisited[1001];

void dfs(int v);
void bfs(int v);
void input();

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    cin >> n >> m >> v;
    input();
    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(v);
    cout << '\n';
    fill(isVisited + 1, isVisited + n + 1, false);
    bfs(v);

}

void input() {
    for (int i = 0; i < m; i++) {
        int from, to;
        cin >> from >> to;
        adj[from].push_back(to);
        adj[to].push_back(from);
    }
}

void dfs(int v) {
    isVisited[v] = true;
    cout << v << " ";
    for (int node : adj[v]) {
        if (isVisited[node] == 0) {
            dfs(node);
        }
    }
}

void bfs(int v) {
    queue<int> adj_queue;
    adj_queue.push(v);
    isVisited[v] = true;
    while(!adj_queue.empty()) {
        int cur = adj_queue.front();
        cout << cur << " ";
        adj_queue.pop();
        for (int node : adj[cur]) {
            if (isVisited[node]) continue;
            adj_queue.push(node);
            isVisited[node] = true;
        }
    }
}

