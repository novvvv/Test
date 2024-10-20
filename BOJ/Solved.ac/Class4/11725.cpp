#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int n;
bool isVisited[100001] = {false, }; // 노드 탐색 정보를 저장할 배열
int parentNode[100001] = {0, }; // 부모 노드 정보를 저장할 배열
vector<int> nodeList[100001]; // 노드 정보를 저장할 인접 리스트

void BFS_LOGIC() {
    queue<int> q;
    q.push(1); // root node 방문
    isVisited[1] = true; // root node (1) 방문표시
    while(!q.empty()) {
        int current = q.front();
        q.pop();
        for (auto iter = nodeList[current].begin(); iter != nodeList[current].end(); iter++) {
            if (isVisited[*iter]) continue; // 이미 방문한 노드라면 continue
            q.push(*iter);
            isVisited[*iter] = true;
            parentNode[*iter] = current;
        }
    }
}

int main() {

    // buffer 속도 성능 향상
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    
    int node1, node2;
    for (int i = 0; i < n - 1; i++) {
        cin >> node1 >> node2;
        nodeList[node1].push_back(node2);
        nodeList[node2].push_back(node1);
    }
    
    BFS_LOGIC();
    
    for (int i = 2; i <= n; i++) {
        cout << parentNode[i] << '\n';
    }
    

    return 0;
}
