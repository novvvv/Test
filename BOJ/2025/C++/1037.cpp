#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; // n의 진짜 약수의 개수
    cin >> n;
    vector<int> prime;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        prime.push_back(temp);
    }

    sort(prime.begin(), prime.end());
    if (prime.size() == 1) {
        cout << prime[0] * prime[0] << '\n';
    }
    else {
        cout << prime[0] * prime[prime.size() - 1] << '\n';
    }

    return 0;
}

// 진짜 약수
// N이 A의 배수이다.
// A가 1과 N이 아니다.

