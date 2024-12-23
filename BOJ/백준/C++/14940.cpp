#include <iostream>
#include <queue>
using namespace std;

const int MAX_NUM = 1001;
int board[MAX_NUM][MAX_NUM];
int dis_arr[MAX_NUM][MAX_NUM];
bool isVisited[MAX_NUM][MAX_NUM];

int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

pair<int, int> input_board(); // 0 : 갈 수 없는 땅 , 1 : 갈 수 있는 땅 , 2 : 목표 지점
void bfs(pair<int , int> starting_point);
void print();
void cant_go();

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);
    pair<int, int> starting_point = input_board();
    bfs(starting_point);
    cant_go();
    print();
    return 0;

}

void cant_go() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((isVisited[i][j] == false) && (dis_arr[i][j] == 0)) {
                dis_arr[i][j] = -1;
            }
        }
    }
}

void print() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << dis_arr[i][j] << " ";
        }
        cout << '\n';
    }
}

void bfs (pair<int,int> starting_point) {

    int start_x = starting_point.first;
    int start_y = starting_point.second;

    isVisited[start_x][start_y] = true;
    queue<pair<int, int>> bfs_queue;
    bfs_queue.push(starting_point);

    while(!bfs_queue.empty()) {

        pair<int, int> current = bfs_queue.front();
        bfs_queue.pop();
        for (int dir = 0; dir < 4; dir++) {

            int nx = current.first + dx[dir];
            int ny = current.second + dy[dir];

            // * exception
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (isVisited[nx][ny] || board[nx][ny] == 0) continue;

            isVisited[nx][ny] = true;
            dis_arr[nx][ny] = dis_arr[current.first][current.second] + 1;
            bfs_queue.push({nx, ny});
        }
    }

}

pair<int, int> input_board() {
    cin >> n >> m;
    pair<int, int> starting_point;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            if (board[i][j] == 2) {
                starting_point = {i, j};
            }
            if (board[i][j] == 0) {
                isVisited[i][j] = true;
                dis_arr[i][j] = 0;
            }
        }
    }
    return starting_point;
}
