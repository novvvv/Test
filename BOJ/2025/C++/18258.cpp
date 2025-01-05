#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string command;
    queue<int> q;
    for (int i = 0; i < n; i++) {
        cin >> command;
        if (command == "push") {
            int input_data;
            cin >> input_data;
            q.push(input_data);
        }

        else if (command == "pop") {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }

        else if (command == "size") {
            cout << q.size() << '\n';
        }

        else if(command == "empty") {
            if (q.empty()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }

        else if (command == "front") {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << q.front() << '\n';
            }
        }

        else {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << q.back() << '\n';
            }
        }
    }


    return 0;
}
