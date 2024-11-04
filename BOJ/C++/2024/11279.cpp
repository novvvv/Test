#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N;
priority_queue<int> heap; // 최소 힙

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    int command;
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

// 1. 배열에 정수 x를 넣는다.
// 2. 절댓값이 가장 작은 값을 출력하며, 배열에서 제거
//  2.1 절댓값이 가장 작은 값이 여러개라면 가장 작은 수를 출력 & 배열에서 제거
