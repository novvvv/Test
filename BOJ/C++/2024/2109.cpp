#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector <pair<int, int>> info;
    for (int i = 0; i < n; i++) {
        pair<int, int> lectureInfo;
        cin >> lectureInfo.second >> lectureInfo.first;
        info.push_back(lectureInfo);

    }

    sort(info.begin(), info.end());


    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < info.size(); i++) {
        pq.push(info[i].second);
        if (pq.size() > info[i].first) {
            pq.pop();
        }
    }

    int res = 0;
    while(pq.size()) {
        res += pq.top();
        pq.pop();
    }

    cout << res << '\n';
    return 0;
}

// 1. 같은 일 수 중에서는 최대 가치를 가지는 강연을 선택.. 잘못된 로직
/* for (int i = 0; i < info.size(); i++) {
    int current_day = info[i].first;
    int current_price = info[i].second;
    int next_day = info[i+1].first;
    if (current_day == info.size() - 1) {
        sum += current_price;
        break;
    }
    if (current_day != next_day) sum += current_price;
} */
