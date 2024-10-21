#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<pair<int, int>> tree[1001];

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Input
    cin >> n >> m;
    int node1, node2, distance;
    for (int i = 0; i < n - 1; i++) {
        cin >> node1 >> node2 >> distance;
        tree[node1].push_back({node2, distance});
        tree[node2].push_back({node1, distance});
    }

    for (int i = 0; i < m; i++) {
        cin >> node1 >> node2;
        queue<pair<int, int>> q;
        bool isVisited[1001] = {false, }; // 방문 벡터 초기화
        q.push({node1, 0}); // 탐색 시작 노드 Push
        isVisited[node1] = true; //  시작 노드 방문 표시
        while (!q.empty()) {

            pair<int,int> current = q.front();
            int currentNode = current.first; // 현재 노드
            int dis = current.second;  // 누적 거리
            q.pop();

            // 목표 노드에 도달 시 누적 거리를 출력하고 종료한다.
            if (currentNode == node2) {
                cout << dis << '\n';
                break;
            }

            // 현재 노드와 연결된 모든 인접 노드 탐색
            for (pair<int, int> p : tree[currentNode]) {
                int next = p.first; // 인접 노드 번호
                int nextDistance = p.second; // 인접 노드 거리
                if (isVisited[next]) continue; // 방문한 노드라면 continue
                isVisited[next] = true; // 인접 노드 방문 체크
                q.push({next, dis + nextDistance});
            }
        }

    }
    return 0;
}
