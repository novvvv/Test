#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int pocketmon_size = nums.size();
    unordered_set<int> pocketmon;
    for(const auto& i : nums){
        if(pocketmon.find(i) == pocketmon.end()){
            pocketmon.insert(i);
        }
    }

    if(pocketmon.size() > pocketmon_size / 2) answer = pocketmon_size / 2;
    else answer = pocketmon.size();
    return answer;
}
