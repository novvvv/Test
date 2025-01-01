#include <iostream>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string line;
    string arr[16][16] = {"null", };
    int max_line = 0;
    for (int i = 0; i < 5; i++) {
        cin >> line;
        for (int j = 0; j < line.length(); j++) {
            arr[i][j] = line[j];
        }
        if (line.length() > max_line) {
            max_line = line.length();
        }
    }

    for (int i = 0; i < max_line; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[j][i] == "null") continue;
            else cout << arr[j][i];
        }
    }

    return 0;
}




