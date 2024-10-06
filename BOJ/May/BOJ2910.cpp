#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

map<int, int> priority;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
        return priority[a.first] < priority[b.first];
    }
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, c;
    cin >> n >> c;
    map<int, int> bindo;
    int priorityValue = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        // 처음 들어오는 숫자인 경우 우선순위 벡터에 추가
        if (bindo.find(temp) == bindo.end()) {
            priority[temp] = priorityValue;
            priorityValue++;
        }
        bindo[temp]++;
    }

    vector<pair<int, int> > bindoVec(bindo.begin(), bindo.end());
    // value 기준으로 정렬
    sort(bindoVec.begin(), bindoVec.end(), compare);

    for (auto &pair: bindoVec) {
        while (pair.second != 0) {
            cout << pair.first << " ";
            pair.second = pair.second - 1;
        }
    }

    return 0;
}
