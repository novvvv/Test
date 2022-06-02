#include <algorithm>
#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            int temp = numbers[i] + numbers[j];
            auto it = find(answer.begin(), answer.end(), temp);
            // 마지막 이터레이터 반환 즉, answer vector에 temp가 존재하지 않는 경우
            if(it == answer.end()) answer.push_back(temp);
            else continue;
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}