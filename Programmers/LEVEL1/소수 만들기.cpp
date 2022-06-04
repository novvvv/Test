#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    for(int i = 0; i < nums.size(); ++i){
        for(int j = i + 1; j < nums.size(); ++j){
            for(int k = j + 1; k < nums.size(); ++k){
                bool flag = true;
                int temp = nums[i] + nums[j] + nums[k];
                for(int i = 2; i < temp; ++i){
                    if(temp % i == 0) flag = false; 
                }
                if(flag) answer++;
            }
        }
    }
    return answer;
}