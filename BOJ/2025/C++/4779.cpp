/**
 * BOJ24263
 * 2025.01.20
 * nov2pro
 */

#include <iostream>
#include <algorithm> // fill
#include <cmath> // pow
using namespace std;
bool isDash[540000];

void recur_blank(int len, int st) {
    if (len == 1) return;
    len /= 3;
    recur_blank(len, st);
    for (int i = st + len; i < st + 2 * len; i++) isDash[i] = true;
    recur_blank(len, st + 2 * len);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while(cin >> n) {
        fill(isDash, isDash + 540000, false);
        recur_blank(pow(3, n), 0);
        for (int i = 0; i < pow(3, n); i++) {
            if (isDash[i]) cout << " ";
            else cout << "-";
        }
        cout << '\n';
    }
    // --------------------------- len = 27, st = 9
    // ---------         --------- 9 ~ 18
    // ---   ---         ---   ---

    return 0;
}
