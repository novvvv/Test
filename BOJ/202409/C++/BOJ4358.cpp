#include <iostream>
#include <map>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.setf(ios::fixed);
    cout.precision(4);

    int treeCount = 0;
    map<string, int> treeMap;
    while (true) {
        string treeName = "";
        getline(cin, treeName);
        if (cin.eof()) break;
        if (treeMap.find(treeName) != treeMap.end()) {
            treeMap[treeName]++;
        }
        else {
            treeMap.insert(make_pair(treeName, 1));
        }
        treeCount++;
    }


    for (auto it = treeMap.begin(); it != treeMap.end(); it++) {
        float ratio = static_cast<float>(it->second) / treeCount;
        ratio *= 100;
        cout << it -> first << " " << ratio << '\n';
    }



    return 0;
}

// BOJ 4358 생태학
// * 각 나무의 종이 주어졌을때 전체에서 몇 %를 차지하는지 구하는 프로그램 *
// 입력 10,000개의 종, 최대 1,000,000 그루
// 각 종의 이름을 "사전순"으로 출력하고, 차지하는 비율을 .4째짜리 까지 반올림
