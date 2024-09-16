#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    unordered_set<string> stringSet(n);
    for (int i = 0; i < n; i++) {
        string temp = "";
        cin >> temp;
       stringSet.insert(temp);
    }

    vector<string> compareStringVector(m);
    for (int i = 0; i < m; i++) {
        cin >> compareStringVector[i];
    }

    int res = 0;
    for (auto& element : compareStringVector) {
        if (stringSet.find(element) != stringSet.end()) {
            res++;
        }
    }

    cout << res;

    return 0;
}

