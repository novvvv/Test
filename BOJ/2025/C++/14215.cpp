#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> line;
    int input_value;
    for (int i = 0; i < 3; i++) {
        cin >> input_value;
        line.push_back(input_value);
    }

    sort(line.begin(), line.end());
    if (line[2] >= line[0] + line[1]) {
        cout << line[0] + line[1] + (line[0] + line[1] - 1) << endl; // c > a + b
    }
    else {
        cout << line[0] + line[1] + line[2] << endl;
    }

    return 0;
}
