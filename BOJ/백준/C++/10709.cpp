#include <iostream>
#include <vector>
using namespace std;

char board[101][101]; // "c" : 구름 O, "." : 구름 X
int ans[101][101];
int height, width;

void input();
void logic();
void print();

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    input();
    logic();
    print();
}

void input () {
    cin >> height >> width;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cin >> board[i][j];
            if (board[i][j] == 'c') ans[i][j] = 0;
            else ans[i][j] = -1;
        }
    }
}

void logic() {
    for (int i = 0; i < height; i++) {
        int temp = -1; // 초기값을 -1로 설정
        bool flag = false;
        for (int j = 0; j < width; j++) {
            if (board[i][j] == 'c') {
                temp = 0;
                flag = true;
            }
            else if (flag && board[i][j] == '.') {
                temp++;
                ans[i][j] = temp;
            }
        }
    }
}

void print() {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
