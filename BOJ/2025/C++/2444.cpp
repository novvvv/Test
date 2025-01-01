#include <iostream>
using namespace std;

int n;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) cout << " ";
        for (int k = 0; k < i * 2 + 1; k++) cout << "*";
        cout << '\n';
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < i + 1; j++) cout << " ";
        for (int k = 0; k < n - i - 1; k++) cout << "*"; // 7 5 3 15
        for (int k = 0; k < n - i - 2; k++) cout << "*"; // 3 2 1
        cout << '\n';
    }

    return 0;
}



