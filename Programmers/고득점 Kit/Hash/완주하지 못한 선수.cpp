#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> participant_map;
    for(const auto& i : participant){
        if(participant_map.find(i) == participant_map.end()){
            participant_map.insert(make_pair(i, 1));
        }
        else{
            participant_map[i]++;
        }
    }

    for(const auto& j : completion){
        participant_map[j]--;
    }

    for(const auto& k : participant_map){
        if(k.second != 0){
            answer = k.first;
            break;
        }
    }
    return answer;
}
