#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        cin >> temp;
        vec.push_back(temp);
    }

    vector<int> two;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            two.push_back(vec[i] + vec[j]);
        }
    }

    sort(two.begin(), two.end());
    int max = -1;
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (binary_search(two.begin(), two.end(), vec[i] - vec[j])) {
                max = max < vec[i] ? vec[i] : max;
            }
        }
    }
    cout << max;
    return 0;
}

/*
 * 2295 세 수의 합
 */

