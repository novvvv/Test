#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    vector<int> num_vec(n.size()); // 각 자리의 숫자를 저장할 배열
    for (int i = 0; i < n.size(); i++) {
        num_vec[i] = n[i] - '0';
    }

    sort(num_vec.rbegin(), num_vec.rend());

    int is_3_mutliple = 0;
    for (int i = 0; i < num_vec.size(); i++) {
        is_3_mutliple += num_vec[i];
    }

    if (is_3_mutliple % 3 != 0) cout << -1 << endl;
    else if (num_vec[num_vec.size() - 1] != 0) cout << -1 << endl;
    else {
        for (int i = 0; i < num_vec.size(); i++) {
            cout << num_vec[i];
        }
    }

    /**
     * 30의 배수가 되기 위한 조건
     * 3의 배수이면서 10의 배수 이어야 한다.
     * 3의 배수는 각 자리의 숫자의 합이 3의 배수이다.
     * 10의 배수는 마지막 자리가 0으로 끝나야 한다.
     */

}
