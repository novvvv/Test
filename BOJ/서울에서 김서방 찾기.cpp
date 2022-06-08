#include <string>
#include <iostream>
#include <vector>
using namespace std;

string solution(vector<string> seoul) {
    auto it = find(seoul.begin(), seoul.end(), "Kim");
    int index = it - seoul.begin();
    string answer = "김서방은 " + to_string(index) + "에 있다";    
    return answer;
}