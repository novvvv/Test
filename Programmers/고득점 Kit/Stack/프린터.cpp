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
        // 본인 순서 O
        if(printer.front().first == max_value){
            // 본인 순서 O, 인덱스 O
            if(printer.front().second == location){
                answer++;
                break;
            }
            // 본인 순서 O,  인덱스 X
            else{
                priorities[printer.front().second] = 0;
                max_value = *max_element(priorities.begin(), priorities.end());
                printer.pop();
                answer++;
            }
        }
        
        // 본인 순서 X
        else{
            printer.push(printer.front());
            printer.pop();
        }
    }
    return answer;
}
