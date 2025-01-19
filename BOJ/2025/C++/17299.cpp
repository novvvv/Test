#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int A[1000001], F[1000001], NGF[1000001];
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        F[A[i]]++;
    }

    stack<int> stk;
    for (int i = n - 1; i >= 0; i--) {
        while(!stk.empty() && F[stk.top()] <= F[A[i]]) stk.pop();
        if (stk.empty()) NGF[i] = -1;
        else NGF[i] = stk.top();
        stk.push(A[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << NGF[i] << " ";
    }

    // 1 1 2 3 4 2 1

    return 0;
}

// 크기가 n인 수열 a1...an
// Ai에 대해서 NGF(i)를 구하여라
// Ai가 수열a 에서 등장한 횟수 = F(Ai), Ai의 오등큰수 = 오른쪽에 있으며, 수열 A에서 등장한 횟수가 F(Ai)보다 큰 수 중 가장 왼쪽에 있는 수, 없다면 -1
// [1, 1, 2, 3, 4, 2, 1] F(1) = 3, F(2) = 2, F(3) = 1, F(4) = 1
