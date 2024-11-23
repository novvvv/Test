#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/* value */
vector<vector<char> > board(3);
const vector<char> line1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
const vector<char> line2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
const vector<char> line3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};

/* method */
int cal_left_finger_distance(char to);

int cal_right_finger_distance(char to);

int current_x1, current_y1, current_x2, current_y2;

int main() {

    // #1 init keyboard vector
    board[0] = line1;
    board[1] = line2;
    board[2] = line3;

    char sL, sR;
    cin >> sL >> sR;

    // #2 초기 왼손, 오른손 위치 셋팅
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            if (sL == board[i][j]) {
                current_x1 = i;
                current_y1 = j;
            }
            if (sR == board[i][j]) {
                current_x2 = i;
                current_y2 = j;
            }
        }
    }

    // #3 메인 로직
    int res_distance = 0;
    string command;
    cin >> command;

    for (int i = 0; i < command.size(); i++) {

        if (command[i] == 'q' || command[i] == 'w' || command[i] == 'e' || command[i] == 'r' || command[i] == 't' ||
            command[i] == 'a' || command[i] == 's' || command[i] == 'd' || command[i] == 'f' || command[i] == 'g' ||
            command[i] == 'z' || command[i] == 'x' || command[i] == 'c' || command[i] == 'v') {
            res_distance += cal_left_finger_distance(command[i]); // 이동시간
            res_distance++; // 누르는시간
        }

        else {
            res_distance += cal_right_finger_distance(command[i]);
            res_distance++;
        }

    }

    cout << res_distance << endl;

    return 0;
}

int cal_left_finger_distance(char to) {
    int distance = 0;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            if (board[i][j] == to) {
                distance = abs(current_x1 - i) + abs(current_y1 - j);
                current_x1 = i;
                current_y1 = j;
                return distance;
            }
        }
    }
    return distance;
}

int cal_right_finger_distance(char to) {
    int distance = 0;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            if (board[i][j] == to) {
                distance = abs(current_x2 - i) + abs(current_y2 - j);
                current_x2 = i;
                current_y2 = j;
                return distance;
            }
        }
    }
    return distance;

}
