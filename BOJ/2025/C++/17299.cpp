#include <iostream>
#include <stack>
using namespace std;

const int max_val = 1000001;
int a[max_val], freq[max_val], ngf[max_val];

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    stack<int> stk;
    for (int i = n - 1; i >= 0; i--) {
        while(!stk.empty() && freq[stk.top()] <= freq[a[i]]) stk.pop();
        if (stk.empty()) ngf[i] = -1; // 스택이 비어있다? -> 오른쪽에 빈도가 더 높은 수가 없다. (-1)
        else ngf[i] = stk.top();
        stk.push(a[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << ngf[i] << " ";
    }

    return 0;
}

