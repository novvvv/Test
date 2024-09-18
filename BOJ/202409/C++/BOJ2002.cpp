#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {

    int n;
    cin >> n;
    map<string, int> carInfoMap;
    for (int i = 0; i < n; i++) {
        string carInfo = "";
        cin >> carInfo;
        carInfoMap.insert(make_pair(carInfo, i));
    }


    vector<string> carInfoVector;
    for (int i = 0; i < n; i++) {
        string carInfo = "";
        cin >> carInfo;
        carInfoVector.push_back(carInfo);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        bool flag = false;
        for (int j = i + 1; j < n; j++) {
            if (carInfoMap[carInfoVector[i]] > carInfoMap[carInfoVector[j]]) {
                flag = true;
            }
        }
        if (flag) count ++;
    }

    cout << count << '\n';

    return 0;
}

