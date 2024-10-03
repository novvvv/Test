#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> currentStk;
    for (int i = n - 1; i >= 0; i--) {
        currentStk.push(arr[i]);
    }

    stack<int> anotherStk;
    int current = 1;
    while(!currentStk.empty() || !anotherStk.empty()) {
        if (!currentStk.empty() && currentStk.top() == current) {
            currentStk.pop();
            current++;
        } //2
        else if (!anotherStk.empty() && anotherStk.top() == current) {
            anotherStk.pop();
            current++;
        } // 1
        else if (!currentStk.empty()) {
            anotherStk.push(currentStk.top());
            currentStk.pop();
        }

        else {
            break;
        }
    }


    if (current > n) {
        cout << "Nice" << '\n';
    }
    else {
        cout << "Sad" << '\n';
    }

    return 0;
}

/**
 * BOJ 12789 도키도키 간식드리미
 *
 */
