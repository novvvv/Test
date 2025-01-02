#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, b;
    cin >> n >> b;
    vector<int> ans;
    while (n != 0) {
        ans.push_back(n % b);
        n /= b;
    }

    reverse(ans.begin(), ans.end());


    for (int i = 0; i < ans.size(); i++) {
        if (0 <= ans[i] && ans[i] <= 9) cout << ans[i];
        else cout << static_cast<char>(ans[i] - 10 + 'A');
    }
    return 0;
}


