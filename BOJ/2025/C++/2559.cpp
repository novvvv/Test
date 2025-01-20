#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k; // n = 온도를 측정한 전체 날짜, k = 합을 구하기 위한 연속적인 날짜 수
    cin >> n >> k;

    int temperature[100001];
    for (int i = 0; i < n; i++) {
        cin >> temperature[i];
    }

    int st = 0;
    int ed = st + k - 1;
    long long max_temp = LLONG_MIN;
    for (int i = 0; i <= n - k; i++) {
        int cur_temp = 0;
        for (int j = st; j <= ed; j++) {
            cur_temp += temperature[j];
        }
        if (max_temp < cur_temp) {
            max_temp = cur_temp;
        }
        st++;
        ed++;
    }

    cout << max_temp << endl;

    return 0;
}

