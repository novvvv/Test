#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {

    int m ,n;
    cin >> m >> n;
    stack<char> converter;
    vector<char> hexa = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    'A', 'B','C', 'D', 'E', 'F'};
    hexa.resize(n);

    if (m == 0) cout << 0 << endl;

    else {
        while (m) {
            converter.push(hexa[m % n]);
            m = m / n;
        }

        while (!converter.empty()) {
            cout << converter.top();
            converter.pop();
        }
    }

}

