#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int max_value = *max_element(priorities.begin(), priorities.end());
    queue<pair<int, int>> printer;
    for(int i = 0; i < priorities.size(); ++i)
        printer.push(make_pair(priorities[i], i));
    while(!printer.empty()){
        // priorities가 가장 높은 케이스
        if(printer.front().first == max_value){
            if(printer.front().second == location){
                answer++;
                break;
            }
            else{
                priorities[printer.front().second] = 0;
                max_value = *max_element(priorities.begin(), priorities.end());
                printer.pop();
                answer++;
            }
        }
        
        // 자기 차례가 아닌 경우
        else{
            printer.push(printer.front());
            printer.pop();
        }
    }
    return answer;
}
