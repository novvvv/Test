#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    // queue에 progresses(진도율)의 index를 추가. 
    for(int i = 0; i < progresses.size(); ++i){
        q.push(i);
    }
    while(!q.empty()){
        // cnt : 같이 배포되어야 하는 작업의 수
        int cnt = 0;
        // 작업 수행 _ progresses(진도율)에 speeds(작업속도) 만큼 추가.
        for(int i = 0; i < progresses.size(); ++i){
            progresses[i] += speeds[i];
        }
        // 가장 앞의 작업이 진도율 100이상을 달성한 경우
        while(!q.empty() && progresses[q.front()] >= 100){
            q.pop();
            cnt++;
        }
        if(cnt != 0)
            answer.push_back(cnt);
    }
    return answer;
}
