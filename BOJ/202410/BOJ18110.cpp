#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }

    vector<int> solved(n);
    for (int i = 0; i < n; i++) {
        cin >> solved[i];
    }

    sort(solved.begin(), solved.end()); // nlogn

    double sum = 0;
    int idx = round((static_cast<double>(n) / 100) * 15);
    // int idx = round(n * 0.15);


    for (int i = idx; i < n - idx; i++) {
        sum += solved[i];
    }

    double res = round(sum / (n - idx * 2));
    cout << res;
    return 0;
}
