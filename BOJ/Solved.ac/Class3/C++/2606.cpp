#include <iostream>
#include <queue>
using namespace std;

int computer_num; // 1 ~ 7
int computer_line;
int node1, node2;
int cnt = 0;

bool isVisited[101] = {false, };
vector<int> nodeList[101];

void recursive_dfs(int cur) {
    cnt++;
    isVisited[cur] = true;
    for (int i : nodeList[cur]) {
        if (!isVisited[i]) {
            recursive_dfs(i);
        }
    }
}

int main()
{
    // Input Logic
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> computer_num >> computer_line;
    for (int i = 0; i < computer_line; i++) {
        cin >> node1 >> node2;
        nodeList[node1].push_back(node2);
        nodeList[node2].push_back(node1);
    }

    recursive_dfs(1);
    cout << cnt - 1;

    // Recursive DFS Logic

}
