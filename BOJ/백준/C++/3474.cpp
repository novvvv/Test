#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++) {
        int n;
        cin >> n;
        int ans = 0;
        for (int j = 5; j <= n; j*=5) {
            ans += n / j;
        }
        cout << ans << '\n';
    }

    return 0;
}

