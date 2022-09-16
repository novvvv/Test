#include <string>
#include <vector>
using namespace std;

bool solution(vector<string> phone_book) {
    for(int i = 0; i < phone_book.size(); ++i){
        for(int j = 0; j < phone_book.size(); ++j){
            // i번째 문자열이 j번째 문자열의 접두어인 경우.
            if(phone_book[i] != phone_book[j] && 
               phone_book[i].find(phone_book[j]) == 0){
                return false;
            }
        }
    }
    return true;
}
