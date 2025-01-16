#include <iostream>
using namespace std;
int main(void){
    for (int i = 1; i <= 1000; i++) {
        if (i == 1000) {
            cout << i << "\n";
            break;
        }
        cout << i << " ";
    }
    return 0;
}
