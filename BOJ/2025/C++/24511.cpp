#include <iostream>
#include <deque>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int queue_or_stack[100001];
    for (int i = 0; i < n; i++) {
        cin >> queue_or_stack[i];
    }

    deque<int> queue_stack;
    int input_value;
    for (int i = 0; i < n; i++) {
        cin >> input_value;
        if (queue_or_stack[i] == 1) continue;
        queue_stack.push_front(input_value);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> input_value;
        queue_stack.push_back(input_value);
        cout << queue_stack.front() << " ";
        queue_stack.pop_front();
    }

    return 0;
}

/**
 * 요구사항 명세
 *
 * queuestack 구조.
 * 1 ~ n번 자료구조 (queue or stack) 나열
 *
 * queuestack 동작방식
 * 1. x0을 입력받는다.
 * 2. x0을 1번 자료구조에 삽입, 1번 자료구조에서 pop한다. 이때 pop된 원소는 x1이다.
 * 3. x1을 2번 자료구조에 삽입, 2번 자료구조에서 pop한다. 이때 pop된 원소는 x2이다.
 * ... xn-1을 n번 자료구조에 삽입, n번 자료구조에서 pop한다. 이때 pop된 원소는 xn이다.
 * xn을 리턴한다.
 */
