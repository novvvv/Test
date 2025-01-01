#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int from, to;
vector<int> bucket;
void print();

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) bucket.push_back(i);

    for (int i = 0; i < m; i++) {
        cin >> from >> to;
        reverse(bucket.begin() + from - 1, bucket.begin() + to);
    }

    print();
    return 0;
}

void print() {
    for (int i = 0; i < n; i++) {
        cout << bucket[i] << " ";
    }
}


