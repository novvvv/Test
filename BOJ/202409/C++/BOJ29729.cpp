#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> dynamicArray;
    int S; // 가변 배열의 초기 최대 크기
    int N; // 배열에 원소를 저장하는 명령어 개수
    int M; // 배열에서 원소를 삭제하는 명령어 개수
    // command 1 : 배열에 원소 저장
    // command 0 : 배열에 끝에 있는 원소 제거

    cin >> S >> N >> M;
    int current_element_size = 0; // 현재 배열에 저장되어 있는 "실제 원소" 개수
    for (int i = 0; i < N + M; i++) {

        int command;
        cin >> command;

        // 배열 원소 추가 커맨드
        if (command == 1) {
            current_element_size++;
            if (current_element_size <= S) {
                dynamicArray.push_back(1);
            }
            if (current_element_size > S) {
                S *= 2;
            }
        }

        // 배열 원소 삭제 커맨드
        if (command == 0) {
            if (!dynamicArray.empty()) {
                dynamicArray.pop_back();
                current_element_size--;
            }
        }
    }

    cout << S;
    return 0;
}


/**
 * 1. 초기 크기를 원하는 만큼 지정하여 가변 배열을 생성한다.
 * 2. 가변 배열이 꽉 차 있는 경우, 현재 가변 배열 크기의 2배에 해당하는 가별 배열 생성
 * 3. 새로 생성한 가변 배열의 맨 앞에 기존 가변 배열에 있는 모든 원소를 복사.
 * 4. 기존 가변 배열을 새로운 가변 배열로 대체
 */
