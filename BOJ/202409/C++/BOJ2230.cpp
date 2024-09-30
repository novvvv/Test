#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    vector<int> arr;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end()); // NLogN
    // arr[j] >= m + arr[i]
    // -> arr 배열 내부의 값을 lower_bound 메서드를 사용해 탐색한다.

    int ans = 2000000001;
    for (int i = 0; i < n; i++) {
        auto idx = lower_bound(arr.begin(), arr.end(), arr[i] + m);
        if (idx != arr.end()) {
            ans = min(ans, abs(*idx - arr[i]));
        }
    }
    cout << ans << '\n';

}
