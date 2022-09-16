#include <string>
#include <vector>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    for(int i = 0; i < phone_book.size(); ++i){
        for(int j = 0; j < phone_book.size(); ++j){
            if(phone_book[i] == phone_book[j]) continue;
            // i번째 문자열이 j번째 문자열의 접두어인 경우.
            if(phone_book[i].find(phone_book[j]) == 0){
                answer = false;
                break;
            } 
        }
    }
    return answer;
}
