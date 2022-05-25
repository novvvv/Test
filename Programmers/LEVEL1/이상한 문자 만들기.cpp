#include <string>
#include <sstream>
#include <vector>
using namespace std;

string solution(string s) {
    int j = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') {
            j = 0;
            continue;
        }
        if(j % 2 == 0) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
        j++;
    }
    string answer = s;
    return answer;
}

// toupper : 소문자 → 대문자, tolower : 대문자 → 소문자