#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int N; // Max 500,000
int bindo[8001];
int main() {

    // buffer 속도 성능 향상
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> N; // max 500,000
    int arr[N];
    int sum = 0, base = 4000;
    vector<int> mode_candidates; // 최빈값 후보를 저장할 벡터
    // 숫자에 + 4000을 하여 각각의 숫자가 배열의 index에 대응되도록 한다.
    for (int i = 0; i < N; i++) {
        int input_data;
        cin >> input_data;
        sum += input_data; // 전체 합
        arr[i] = input_data;
        bindo[base + input_data]++; // 최빈값 빈도 배열 저장

    }
    // 1. 산술평균 : N개의 수들의 합을 N으로 나눈 값 (0)
    // -> 소수점 이하 첫째 자리에서 반올림해야 한다.
    int ans = round(static_cast<double>(sum) / N);
    if (ans == -0) cout << 0 << '\n';
    else cout << ans << '\n';

    // 2. 중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우, 중앙에 위치하는 값 (0)
    // N은 항상 홀수 이기에 다른 경우의 수는 없음.
    sort(arr, arr + N); // nlogn
    cout << arr[N / 2] << '\n';

    // 3. 최빈값 계산
    int max_cnt = 0;
    for (int i = 0; i <= 8000; i++) {
        if (bindo[i] > max_cnt) {
            max_cnt = bindo[i];
            mode_candidates.clear();
            mode_candidates.push_back(i);
        } else if (bindo[i] == max_cnt) {
            mode_candidates.push_back(i);
        }
    }

    // 최빈값 중 두 번째로 작은 값을 출력
    sort(mode_candidates.begin(), mode_candidates.end());
    if (mode_candidates.size() == 1) {
        cout << mode_candidates[0] - base << '\n';
    } else {
        cout << mode_candidates[1] - base << '\n'; // 두 번째로 작은 최빈값
    }

    // 4. 범위 : N개의 수들 중 최댓값 최솟값 차이 (0)
    int max_value = *max_element(arr, arr + N);
    int min_value = *min_element(arr, arr + N);
    cout << max_value - min_value << '\n';

    return 0;
}
