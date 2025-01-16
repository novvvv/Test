#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool cmp (const pair<string,int>& a, const pair<string,int>& b) {
    // case1 : 등장 빈도가 같은 경우
    if (a.second == b.second) {
        // case1.1 : 문자열의 길이가 같은 경우
        if (a.first.size() == b.first.size()) {
            return a.first < b.first;
        }
        // case1.2 : 문자열의 길이가 다른 경우
        return a.first.size() > b.first.size();
    }

    // case2 : 등장 빈도가 다른 경우
    return a.second > b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    string word;
    map<string, int> words;
    for (int i = 0; i < n; i++) {
        cin >> word;
        if (word.length() < m) continue;
        words[word]++;
    }

    vector<pair<string, int>> map_to_vec(words.begin(), words.end());
    sort(map_to_vec.begin(), map_to_vec.end(), cmp);

    for (int i = 0; i < map_to_vec.size(); i++) {
        cout << map_to_vec[i].first << '\n';
    }

    return 0;
}

// 1. 자주 나오는 단어일수록 앞에 배치한다. -> map으로 카운팅
// 2. 해당 단어의 길이가 길수록 앞에 배치한다. -> sort 커스텀
// 3. 알파벳 사전 순으로 앞에 있는 단어일수록 앞에 배치한다.
