#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int max_count = 0, min_count = 0;
    for(int i = 0; i < lottos.size(); i++){
        if(lottos[i] == 0) max_count++;
        for(int j = 0; j < win_nums.size(); j++){
            if(lottos[i] == win_nums[j]){
                max_count++;
                min_count++;
            }
        }
    }
    int max_rank = 0;
    int min_rank = 0;
    if(max_count == 6) max_rank = 1;
    else if(max_count == 5) max_rank = 2;
    else if(max_count == 4) max_rank = 3;
    else if(max_count == 3) max_rank = 4;
    else if(max_count == 2) max_rank = 5;
    else max_rank = 6;

    if(min_count == 6) min_rank = 1;
    else if(min_count == 5) min_rank = 2;
    else if(min_count == 4) min_rank = 3;
    else if(min_count == 3) min_rank = 4;
    else if(min_count == 2) min_rank = 5;
    else min_rank = 6;
    answer.push_back(max_rank);
    answer.push_back(min_rank);
    return answer;
}