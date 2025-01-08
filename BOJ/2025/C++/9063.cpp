#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> points;
    pair<int, int> point;
    for (int i = 0; i < n; i++) {
        cin >> point.first >> point.second;
        points.push_back(point);
    }

    int min_x = 10001;
    int min_y = 10001;
    int max_x = -10001;
    int max_y = -10001;

    for (int i = 0; i < points.size(); i++) {
        if (points[i].first < min_x) min_x = points[i].first;
        if (points[i].first > max_x) max_x = points[i].first;
        if (points[i].second < min_y) min_y = points[i].second;
        if (points[i].second > max_y) max_y = points[i].second;
    }

    cout << (max_x - min_x) * (max_y - min_y) << '\n';


    return 0;
}
