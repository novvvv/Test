#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i == n) {
            cout << i;
            break;
        }
        cout << i << endl;
    }
    return 0;
}
