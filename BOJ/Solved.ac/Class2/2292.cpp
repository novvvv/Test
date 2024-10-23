#include <iostream>
using namespace std;

int n;

int main() {

    // buffer 성능 향상
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    int index = 0;
    for (int sum = 2; sum <= n; index++) {
        sum += index * 6;
    }

    if (n == 1) index = 1;
    cout << index << '\n';

    return 0;
}
