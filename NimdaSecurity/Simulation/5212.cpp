/////////////////////////////////////////////////////////////////////
/** Info
 * developer : nov
 * BOJ 5212 지구온난화
 * 제출일자 : 2024.11.24(일)
 * ver : 1.0
**/
/////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // #1 Input & init Value
    vector<vector<char>> board;
    int R, C;
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        vector<char> line(C);
        for (int j = 0; j < C; j++) {
            cin >> line[j];
        }
        board.push_back(line);
    }

    // check_board : 50년 뒤 땅의 예상 모습을 저장하는 벡터
    // * 바로 board에 정보를 업데이트하면 계산에 영항이 가기에 별도의 bool 벡터를 선언한다.
    // false : 바다 , true : 섬
    vector<vector<bool>> check_board(R, vector<bool>(C, false));
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (board[i][j] == 'X') check_board[i][j] = true;
        }
    }

    // 인접한 바다의 영역을 기준으로 check_board를 업데이트
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            int check = 0;
            if (board[i][j] == 'X') {
                if (i - 1 >= 0) {
                    if (board[i-1][j] == '.') check++;
                }
                if (i + 1 < board.size()) {
                    if (board[i+1][j] == '.') check++;
                }
                if (j - 1 >= 0) {
                    if (board[i][j-1] == '.') check++;
                }
                if (j + 1 < board[i].size()) {
                    if (board[i][j+1] == '.') check++;
                }

                // 배열의 범위를 벗어난 경우 -> 바다로 판정
                if (i -1 < 0) check++;
                if (i + 1 >= board.size()) check++;
                if (j - 1 < 0) check++;
                if (j + 1 >= board[i].size()) check++;

                if (check >= 3) {
                    check_board[i][j] = false;
                }

            }
        }
    }

    // Check_board를 기준으로 기존 board를 업데이트
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            if (check_board[i][j] == false) board[i][j] = '.';
            else board[i][j] = 'X';
        }
    }


    // 지도를 자를 범위를 설정
    int min_column = 99, max_column = -1, min_row = 99, max_row = -1;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            if (board[i][j] == 'X') {
                if (min_column > i) min_column = i;
                if (max_column < i) max_column = i;
                if (min_row > j) min_row = j;
                if (max_row < j) max_row = j;
            }
        }
    }

    // Output
    for (int i = min_column; i <= max_column; i++) {
        for (int j = min_row; j <= max_row; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }


    return 0;
}

