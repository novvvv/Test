#include <string>
#include <vector>

using namespace std;
vector<int> num = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
vector<bool> numCheck(10, false);
int solution(vector<int> numbers) {
    int answer = 0;
    for(int i = 0; i < numbers.size(); i++){
        for(int j = 0; j < num.size(); j++){
            if(numbers[i] == num[j]){
                numCheck[j] = true;
            } 
        }
    }

    for(int i = 0; i <  numCheck.size(); i++){
        if(numCheck[i] == false){
            answer += i;
        }
    }
    return answer;
}