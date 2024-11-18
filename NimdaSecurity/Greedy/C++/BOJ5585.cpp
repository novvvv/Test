#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int balance;
    cin >> balance;
    int change = 1000 - balance; // 620

    int coin = 0;
    coin += change / 500;
    change %= 500;

    coin += change / 100;
    change %= 100;

    coin += change / 50;
    change %= 50;

    coin += change / 10;
    change %= 10;

    coin += change / 5;
    change %= 5;

    coin += change;

    cout << coin << endl;

}
