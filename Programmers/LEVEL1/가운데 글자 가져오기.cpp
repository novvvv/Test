#include <string>
#include <vector>
using namespace std;

string solution(string s) {
    string answer = "";
    bool isOdd = false;
    if(s.length() % 2 == 0) isOdd = true;
    if(isOdd) {
        answer += s[s.length()/2 - 1];
        answer += s[s.length()/2];
    }// 짝수길이
    else answer += s[s.length()/2]; //홀수길이
    return answer;
}