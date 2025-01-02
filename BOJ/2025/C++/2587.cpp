#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> score;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int data;
    for (int i = 0; i < 5; i++) {
        cin >> data;
        score.push_back(data);
    }

    sort(score.begin(), score.end());

    int aver = 0;
    for (int i = 0; i < 5; i++) aver += score[i];

    cout << aver / 5<< '\n';
    cout << score[2] << '\n';


    return 0;
}


