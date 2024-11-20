#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

vector<int> square_number;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;
    bool flag = true;

    // main logics
    for(int i = m; i <= n; i++) {
        for(int j = 0; j <= i; j++) {
            if (j * j == i) {
                flag = false;
                square_number.push_back(i);
            }
        }
    }

    if (flag) {
        cout << -1 << '\n';
        return 0;
    }

    cout << accumulate(square_number.begin(), square_number.end(), 0) << '\n';
    cout << *min_element(square_number.begin(), square_number.end());
}
