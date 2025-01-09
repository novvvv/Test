#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    while (true) {

        cin >> a >> b >> c;
        vector<int> lines;
        lines.push_back(a);
        lines.push_back(b);
        lines.push_back(c);
        sort(lines.begin(), lines.end());

        // Exception Check
        if (a == 0 || b == 0 || c == 0) break;

        // Exception Check
        if (lines[2] >= lines[0] + lines[1]) {
            cout << "Invalid" << '\n';
            continue;
        }
        // Main Logic
        if (a == b && b == c && b == a) cout << "Equilateral" << '\n';
        else if (a == b || b == c || c == a) cout << "Isosceles" << '\n';
        else cout << "Scalene" << '\n';
    }

    return 0;
}

// 세 변의 길이가 같다. -> Equilateral
// 두 변의 길이"만" 같다. -> Isosceles
// 세 변의 길이가 모두 다르다 -> Scalene
