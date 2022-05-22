#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    int temp = 0;
    vector<int> answer;    
    while(n != 0){
        temp = n % 10;
        answer.push_back(temp);
        n = n / 10;
    }
    return answer;
}