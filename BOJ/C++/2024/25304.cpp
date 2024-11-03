#include <iostream>
using namespace std;

int N, a, b;
long long X, totalPrice;

int main()
{
    cin >> X >> N;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        totalPrice += a * b;
    }

    if (X == totalPrice) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}

// 1 000 000 0 (천만) * 0 0 0
