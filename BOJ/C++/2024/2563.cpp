#include <iostream>
using namespace std;
int n, x, y;
int x2, y2;
int sum;
int arr[100][100] = {0, };

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        for (int i = x; i < x + 10; i++) {
            for (int j = y; j < y + 10; j++) {
                arr[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (arr[i][j] == 1) sum++;
        }
    }
    cout << sum << '\n';
    return 0;
}
