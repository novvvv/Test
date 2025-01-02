#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[4] = {25, 10, 5, 1};
    int res[4] = {0, };
    int test_case, price;
    cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        memset(res, 0, sizeof(res));
        cin >> price;
        for (int j = 0; j < 4; j++) {
            res[j] = price / arr[j];
            price -= res[j] * arr[j];
        }

        for (int j = 0; j < 4; j++) {
            cout << res[j] << " ";
        }

        cout << '\n';
    }
    return 0;
}
