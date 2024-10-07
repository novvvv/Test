#include <iostream>
#include <algorithm>
using namespace std;
int height[9];

int main() {
    cin.tie(0); cout.tie(0);
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> height[i];
        sum += height[i];
    }

    sort(height, height + 9); // sort

    // brute-force
    int flag1 = -1;
    int flag2 = -1;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - (height[i] + height[j]) == 100) {
                flag1 = height[i];
                flag2 = height[j];
            }
        }
    }

    // output
    for (int i = 0; i < 9; i++) {
        if (height[i] == flag1 || height[i] == flag2) {
            continue;
        }
        cout << height[i] << " ";
    }
    return 0;
}

