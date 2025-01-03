#include <iostream>
#include <stack>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    stack<int> stk;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int command;
        cin >> command;
        if (command == 1) {
            int input_data;
            cin >> input_data;
            stk.push(input_data);
        }
        else if (command == 2) {
            if (!stk.empty()) {
                cout << stk.top() << '\n';
                stk.pop();
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (command == 3) {
            cout << stk.size() << '\n';
        }
        else if (command == 4) {
            if (stk.empty()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else {
            if (!stk.empty()) {
                cout << stk.top() << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
    }
    return 0;
}
