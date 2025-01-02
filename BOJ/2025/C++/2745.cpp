#include <iostream>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;
    int b;
    cin >> n >> b;
    int ans = 0;
    for (int i = 0; i < n.length(); i++) {
        // case1 : 0 ~ 9
        if ('0' <= n[i] && n[i] <= '9') ans = ans * b + (n[i] - '0');
        // case2 : A ~
        else ans = ans * b + (n[i] - 'A' + 10);
    }

    cout << ans << '\n';
    return 0;
}
