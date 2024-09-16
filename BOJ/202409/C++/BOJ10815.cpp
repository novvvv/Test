#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // cin 100만개당 0.1 Ms (최적화)
    // cout 100만개당 0.2 Ms (최적화)
    int n; // 숫자 카드 n개
    cin >> n;

    // cin 500_000 + cardSet O(N) 500_000
    unordered_set<int> cardSet;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        cardSet.insert(temp);
    }

    // 2 * O(N) 1_000_000
    int m;
    cin >> m;
    vector<int> compareCard;
    vector<int> ans;
    for (int i = 0; i < m; i++) {
        int temp = 0;
        cin >> temp;
        if (cardSet.find(temp) != cardSet.end()) {
            ans.push_back(1);
        }
        else {
            ans.push_back(0);
        }
    }

    // O(N) 500_000
    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}


/**
 * 숫자 카드 N개, 정수 M개
 * 1st-Line : 숫자 카드 N개 (1 <= N <= 500_000) 가 주어진다.
 * 2nd_Line : 숫자카드에 적혀있는 정수가 주어진다.
 * 3rd_Line : M (1<= M<= 500_000) 이 주어진다.
 * 4th_Line : 상근이가 가지고 있는 숫자 카드인지 아닌지 구해야 할 정수가 주어진다.
 *
 * 시간 제한 2초 : 2억번
 * N개 : 500_000
 */
