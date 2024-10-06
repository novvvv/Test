#include <iostream>
#include <vector>
using namespace std;
int input[100001];
int n;
vector<int> v;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input[i];
        v.push_back(input[i]);
    }
    sort(v.begin(), v.end()); // nlogn
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i : v) {
        cout << i << " ";
    }

    cout << '\n';
    return 0;
}
