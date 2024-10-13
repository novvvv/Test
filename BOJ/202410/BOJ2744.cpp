#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++) {
        if (std::isupper(a[i])) {
            a[i] = std::tolower(a[i]);
        } else {
            a[i] = std::toupper(a[i]);
        }
    }

    cout << a << endl;

    return 0;
}

