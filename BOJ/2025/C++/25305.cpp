#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, k;
vector<int> player;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    int score;
    for (int i = 0; i < n; i++) {
        cin >> score;
        player.push_back(score);
    }

    sort(player.begin(), player.end());
    cout << player[n - k] << '\n';

    return 0;
}


