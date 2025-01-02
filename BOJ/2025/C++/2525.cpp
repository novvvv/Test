#include <iostream>
using namespace std;

int st_h, st_m;
int playing_time;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> st_h >> st_m >> playing_time;
    int fin_time = st_h * 60 + st_m + playing_time;
    int fin_h = fin_time / 60;
    int fin_m = fin_time % 60;

    if (fin_h >= 24) {
        cout << fin_h - 24 << " " << fin_m << '\n';
    }
    else {
        cout << fin_h << " " << fin_m << '\n';
    }

    return 0;
}
