#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // 첫 번째 숫자가 두 번째 숫자의 약수다? -> factor
    // 첫 번째 숫자가 두 번째 숫자의 배수다? -> Multiple
    // 둘 다 아니다? -> neither

    int a, b;
    cin >> a >> b;
    while (a != 0 && b != 0) {
        if (b % a == 0) {
            cout << "factor" << '\n';
        }
        else if (a % b == 0) {
            cout << "multiple" << '\n';
        }
        else {
            cout << "neither" << '\n';
        }
        cin >> a >> b;
    }


    return 0;
}
