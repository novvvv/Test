#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> prefix_sum(n + 1, 0); // ?
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
    }
    int max_visitor = prefix_sum[x] - prefix_sum[0];
    int max_day_count = 1;

    for (int i = 1; i <= n - x; i++) {
        int temp_visitor = prefix_sum[i + x] - prefix_sum[i];
        if (max_visitor < temp_visitor) {
            max_visitor = temp_visitor;
            max_day_count = 1;
        }
        else if (max_visitor == temp_visitor) {
            max_day_count++;
        }

    }

    if (max_visitor == 0) {
        cout << "SAD" << endl;
    } else {
        cout << max_visitor << endl;
        cout << max_day_count << endl;
    }
    return 0;
}
