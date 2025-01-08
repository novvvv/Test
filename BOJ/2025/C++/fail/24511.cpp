#include <iostream>
#include <deque>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n; // queuestack 구성 자료구조 개수

    int queue_stack[100001][2];
    int queue_or_stack;
    for (int i = 0; i < n; i++) {
        cin >> queue_or_stack;
        if (queue_or_stack == 0) queue_stack[i][0] = 0; // queue
        else queue_stack[i][0] = 1; // stack
    }

    int init_value;
    for (int i = 0; i < n; i++) {
        cin >> init_value;
        queue_stack[i][1] = init_value;
    }


    int m;
    cin >> m;
    int x;
    vector<int> res;
    for (int i = 0; i < m; i++) {
        cin >> x;
        for (int j = 0; j < n; j++) {
            if (queue_stack[j][0] == 0) { // queue
                int temp = queue_stack[j][1];
                queue_stack[j][1] = x;
                x = temp;
            }
        }
        res.push_back(x);
    }

    // m = 100,000
    // n = 100,000
    // m * N = 100,000,000,00 (100억)

    // 값이 실제로 바뀌는 시점은 queue-stack[i][0] == 0 즉, queue 일 떄

    for (int i = 0; i < res.size(); i++) cout << res[i] << " ";


    return 0;
}
