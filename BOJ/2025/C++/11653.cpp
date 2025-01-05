#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> prime;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) prime.push_back(i);
    }

    int idx = 0;
    vector<int> ans;
    while(n != 1) {
        if (n % prime[idx] == 0) {
            n /= prime[idx];
            ans.push_back(prime[idx]);
        } else {
            idx++;
        }
    }

    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << '\n';
    }

    return 0;
}
