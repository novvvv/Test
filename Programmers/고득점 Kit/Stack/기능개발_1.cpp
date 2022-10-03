#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;

    int size = speeds.size(); 
    for(int i = 0; i < size; ++i)
        q.push(i);

    while(!q.empty()){
        int cnt = 0;
        for(int j = 0; j < size; ++j)
            progresses[j] += speeds[j]; 
        // progresses의 q.front() index가 100이 넘었다면, pop
        while(!q.empty() && progresses[q.front()] >= 100){
            cnt++;
            q.pop();
        }
        /* 중요! cnt가 0일때는 배포해서는 안된다. */     
        if(cnt != 0){
            answer.push_back(cnt);
        }
    }
    return answer;
}
