#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string new_id) {

    // 1 단계 : new_id의 모든 대문자를 소문자로 치환 _ isupper, tolower
    for(int i = 0; i < new_id.length(); i++)
        if (isupper(new_id[i])) 
            new_id[i] = tolower(new_id[i]);
    
    // 2 단계 : new_id에서 "알파벳 소문자", "숫자", "빼기(-)", "밑줄(_)", "마침표(.)"
    // 를 제외한 모든 문자를 제거 _ islower, isdigit
    for(int i = 0; i < new_id.length(); ) {
        if (islower(new_id[i]) || isdigit(new_id[i])
              || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.'){
            i++;
            continue;
        }
        
        new_id.erase(new_id.begin() + i);
    }
    
    // 3 단계 : 마침표(.)가 2번 이상 연속되면 하나의 마침표(.)로 치환
    for(int i = 1; i < new_id.length(); ){
        if (new_id[i] == '.' && new_id[i - 1] == '.'){
            new_id.erase(new_id.begin() + i);
            continue;
        }
        else i++;
    }
    
    // 4 단계 : 마침표(.)가 처음이나 끝에 위치하면 제거
    if (new_id.front() == '.') new_id.erase(new_id.begin());
    if (new_id.back() == '.') new_id.erase(new_id.end() - 1);
    
    // 5 단계 : new_id가 빈 문자열이면, "a"를 대입
    if (new_id.length() == 0) 
        new_id = "a";
    
    // 6 단계 : new_id의 길이가 16 이상이면, 첫 15개 문자를 제외한 나머지 문자 제거
    if (new_id.length() >= 16){
        while(new_id.length() != 15){
            new_id.erase(new_id.begin() + 15);
        }
    }
    if (new_id.back() == '.') new_id.erase(new_id.end() - 1);
    
    // 7 단계 : new_id의 길이가 2자 이하라면, new_id의 마지막 문자를 new_id 길이가 3이 될 때 까지 반복
    if (new_id.length() <= 2){
        while(new_id.length() != 3){
            new_id += new_id.back();
        }
    }
    
    return new_id;
}