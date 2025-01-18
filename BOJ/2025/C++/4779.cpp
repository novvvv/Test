/**
 * BOJ4779
 * 2025.01.19
 * nov2pro
 */

#include <iostream>
#include <algorithm> // fill
#include <cmath> // pow
using namespace std;
bool isDash[540000];

void blank(int n, int st) {
    if (n == 1) return;
    n /= 3;
    blank(n, st);
    for (int i = st + n; i < st + 2 * n; i++) isDash[i] = true;
    blank(n, st + 2 * n);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n) {
        fill(isDash, isDash + 540000, false);
        blank(pow(3, n), 0); // 길이 n^3, st = 0
        for (int i = 0; i < pow(3, n); i++) {
            if (isDash[i]) cout << " ";
            else cout << "-";
        }
        cout << '\n';
    }

    return 0;
}
