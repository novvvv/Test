#include <iostream>
#include <deque>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int command;
    deque<int> dq;
    for (int i = 0; i < n; i++) {

        cin >> command;
        if (command == 1) {
            int input_value;
            cin >> input_value;
            dq.push_front(input_value);
        }

        else if (command == 2) {
            int input_value;
            cin >> input_value;
            dq.push_back(input_value);
        }

        else if (command == 3) {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            else {
                cout << -1 << '\n';
            }
        }

        else if (command == 4) {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            else {
                cout << -1 << '\n';
            }
        }

        else if (command == 5) {
            cout << dq.size() << '\n';
        }

        else if (command == 6) {
            if (dq.empty()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }

        else if (command == 7) {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }

        else {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}
