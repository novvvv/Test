#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, p; // n = 음의 수 (max:500,000) , p = 프랫 수 (max:300,000)
    cin >> n >> p;

    int res = 0;
    stack<int> lineStack[7];
    for (int i = 0; i < n; i++) {
        int line, fret;
        cin >> line >> fret;
        // case1 : 현재 누르고자 하는 프랫이 기존에 누르고 있는 프랫 보다 높은 경우
        if (!lineStack[line].empty() && lineStack[line].top() < fret) {
            lineStack[line].push(fret);
            res++;
        }
        // case2 : 현재 누르고자 하는 프랫이 기존에 누르고 있는 프랫 보다 낮은 경우
        else if (!lineStack[line].empty() && fret < lineStack[line].top()) {
            while (!lineStack[line].empty() && lineStack[line].top() > fret) {
                lineStack[line].pop();
                res++;
            }

            if (!lineStack[line].empty() && lineStack[line].top() == fret) {
                continue;
            }
            lineStack[line].push(fret);
            res++;
        }
        // case3 : 아무것도 누르고 있지 않은 경우
        else if (lineStack[line].empty()) {
            lineStack[line].push(fret);
            res++;
        }
    }
    cout << res << '\n';
    return 0;
}
