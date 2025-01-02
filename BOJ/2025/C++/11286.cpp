#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

struct cmp {
    bool operator() (int a, int b) {
        if (abs(a) == abs(b)) return a > b; // 절댓값이 같다 -> (실제) 작은 원소를 앞으로
        return abs(a) > abs(b); // 절댓값이 작은 원소를 반환한다.
    }
};

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> heap;
    // min heap C++17 이후 부터는 템플릿 비교자 자동 유추 기능 덕분에 명시하지 않아도됨.
    // But C++14 이하 버전은 제대로 명시

    priority_queue<int, vector<int>, cmp> pq;

    int n;
    cin >> n;
    int command;
    for (int i = 0; i < n; i++) {
        cin >> command;
        if (command == 0) {
            if (pq.empty()) cout << '0' << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else {
            pq.push(command);
        }
    }
    return 0;
}

// 절댓값 힙
// 1. 배열에 정수 x를 넣는다.
// 2. 배열에서 절댓값이 가장 작은 값을 출력, 그 값을 배열에서 제거한다.
// * 절댓값이 가장 작은 값이 여러개일 경우, 가장 작은 수를 출력하고 그 값을 배열에서 제거한다.
