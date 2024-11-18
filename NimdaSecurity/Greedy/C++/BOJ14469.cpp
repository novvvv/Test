#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;
    vector<pair<int, int>> cowInfo;
    int startTime, endTime;
    for (int i = 0; i < n; i++) {
        cin >> startTime >> endTime;
        cowInfo.push_back({startTime, endTime});
    }
    sort(cowInfo.begin(), cowInfo.end());

    int currentTime = 0; // 현재 시간
    int progress_time = 0; // 진행시간
    for (int i = 0; i < n; i++) {
        int waiting_time = 0; // 대기시간
        if (currentTime < cowInfo[i].first) {
            waiting_time = cowInfo[i].first - currentTime;
        }
        progress_time = cowInfo[i].second;
        currentTime += waiting_time + progress_time;
    }
    cout << currentTime << endl;

    return 0;
}

// N마리의 소가 농장에 방문한다.
// 소가 도착한 시간, 검문받는 시간은 상이하다. (같을 수도 있다.)
// 두 소가 동시에 검문을 받는것은 불가능하다.
