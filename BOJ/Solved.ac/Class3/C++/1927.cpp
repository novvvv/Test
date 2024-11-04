#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N;
priority_queue<int, vector<int>, greater<int>> heap; // 최소 힙

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    int command = 0;
    for (int i = 0; i < N; i++) {
         cin >> command;
        if (command == 0) {
            if (!heap.empty()) {
                cout << heap.top() << '\n';
                heap.pop();
                continue;
            }
            cout << "0" << '\n';
        }

        else {
            heap.push(command);
        }
    }
    return 0;
}
