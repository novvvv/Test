#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    vector<int> v(dungeons.size());
    for(int i = 0; i < dungeons.size(); ++i){
        v[i] = i;
    }

    // next_permutation
    // dungeons[i][0] = 최소 필요 피로도 doungeons[i][1] = 소모 피로도
    int max_fatigue = 0;
    do{
        // 피로도 리셋
        int temp_k = k;
        int temp_fatigue = 0;
        // !! permutation을 잘못 작성
        // 현재 피로도(temp_k)가 최소 필요 피로도보다 크거나 같다면,
        for(int i = 0; i < dungeons.size(); ++i){
            if(temp_k >= dungeons[v[i]][0]){
                // 현재 피로도(temp_k)에서 소모 피로도 만큼 마이너스.
                temp_k -= dungeons[v[i]][1];
                temp_fatigue++;
            }
        }
        max_fatigue = max(max_fatigue, temp_fatigue);          
    }while(next_permutation(v.begin(), v.end()));
    answer = max_fatigue;
    return answer;
}
