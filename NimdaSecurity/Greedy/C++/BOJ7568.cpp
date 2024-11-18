#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> info;
    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        info.push_back({x, y});
    }

    vector<int> rank(n, 1);
    for (int i = 0; i < n; i++) {
        int rank_number = 1;
        pair<int, int> standard_person = info[i];
        for (int j = 0; j < n; j++) {
            pair<int, int> compare_person = info[j];
            if (standard_person.first < compare_person.first && standard_person.second < compare_person.second) {
                rank_number++;
            }
        }
        rank[i] = rank_number;
    }

    for (int i = 0; i < n; i++)
        cout << rank[i] << " ";

}

