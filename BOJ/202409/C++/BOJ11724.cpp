#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> graph[1005]; // 인접 리스트
bool isVisited[1005]; // 방문 기록

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    // graph 정보 입력
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        // UnDirected Graph
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // bfs 인접 리스트 logic
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (isVisited[i]) continue;
        res++;
        queue<int> q;
        q.push(i); // i번째 노드 큐 등록
        isVisited[i] = true; // i번째 노드 방문 표시

        while (!q.empty()) {
            int currentNode = q.front();
            q.pop();
            // i번째 node 인접 리스트 순회
            for (auto nextNode : graph[currentNode]) {
                if (isVisited[nextNode]) continue;
                q.push(nextNode);
                isVisited[nextNode] = true;
            }
        }
    }

    cout << res << '\n';

    return 0;
}
