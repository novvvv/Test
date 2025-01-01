#include <iostream>
using namespace std;

int n, m;
int from, to, ball;
int arr[101];

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> from >> to >> ball;
        for (int j = from - 1; j < to; j++) {
            arr[j] = ball;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
