#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int line_spot = 2;

    while(n--) {
        line_spot = (line_spot * 2) - 1;
    }
    cout << line_spot * line_spot;
    return 0;
}
