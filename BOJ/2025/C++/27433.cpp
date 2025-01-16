#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned int n;
    cin >> n;

    long long fac_sum = factorial(n);
    cout << fac_sum << endl;

    return 0;
}

