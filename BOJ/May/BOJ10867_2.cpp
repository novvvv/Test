#include <iostream>
#include <vector>
#include <set>
using namespace std;
int input[100001];
int n;
set<int> v;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input[i];
        v.insert(input[i]);
    }
    // sort(v.begin(), v.end()); // nlogn

    for (int i : v) {
        cout << i << " ";
    }

    cout << '\n';
    return 0;
}
