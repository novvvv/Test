#include <iostream>
#include <vector>
using namespace std;

int main() {

    // BOJ 3003
    cin.tie(0);
    cout.tie(0);

    vector<int> res = {1, 1, 2, 2, 2, 8}; // 킹, 퀸, 룩, 비숍, 나이트, 폰
    vector<int> diff;
    for (int i = 0; i < 6; i++) {
        int temp = 0;
        cin >> temp;
        if (temp != res[i]) {
            diff.push_back(res[i] - temp);
        } else {
            diff.push_back(0);
        }
    }

    for (const auto& element : diff) {
        cout << element << " ";
    }

    return 0;

}

// 킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개

