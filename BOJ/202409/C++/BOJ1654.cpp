#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    // BOJ 1654 랜선 자르기
    // 첫 번째 로직 BruteForce : 1 ~ 2^31(랜선의 최대 길이) - 1 만큼 탐색 -> O(N) 시간 초과
    // 두 번째 로직 Binary_Search

    /**
     * input Value
     * K : 랜선의 개수 (1 ~ 10,000)
     * lines : 랜선의 길이 정보가 저장된 벡터
     * N : 필요한 랜선의 개수 (1 ~ 1,000,000)
     */

    int K, N;
    vector<int> lines;
    cin >> K >> N;
    for (int i = 0; i < K; i++) {
        int temp = 0;
        cin >> temp;
        lines.push_back(temp);
    }

    // maxLineLength 랜선 내부 최대값
    auto maxLineIter = max_element(lines.begin(), lines.end());
    int maxLineLength = *maxLineIter;

    // Binary Search Logic
    // overflow 방지 long long type 선언
    long long res = 0;
    long long left = 1, right = maxLineLength, mid;
    while (left <= right) {

        mid = (left + right) / 2;
        int currentLines = 0; // 생성된 라인 개수

        for (int i = 0; i < K; i++) {
            currentLines += lines[i] / mid;
        }

        // case1: 생성된 라인 개수(currentLines) >= 필요한 라인 개수(N)
        if (currentLines >= N) {
            left = mid + 1;
            res = max(res, mid); // 라인 길이 최대값 정보 저장
        }

        // case2: 생성된 라인 개수(currentLines) < 필요 라인 개수(N)
        else {
            right = mid - 1;
        }

    }

    cout << res << '\n';


    return 0;
}

// BOJ 1654 랜선 자르기
// 캠프에 쓸 N개의 랜선이 필요하다.
// 오영식은 길이가 다른 K개의 랜선이 있다.
// 랜선을 모두 N개의 "길이가 같은" 랜선으로 만들고 싶다

// 4개의 랜선의 개수 (K), 필요한 랜선 개수 (n) 11
// 802, 743, 457, 539


