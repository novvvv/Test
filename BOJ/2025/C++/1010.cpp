#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test_case;
    cin >> test_case;

    // mCn
    for (int i = 0; i < test_case; i++) {

        int n, r;
        cin >> r >> n;
        long long ans = 1;
        for (int j = 0; j < r; j++) {
            ans *= (n - j);
            ans /= (j + 1);
        }
        cout << ans << '\n';
    }

    return 0;
}
