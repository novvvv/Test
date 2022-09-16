#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool solution(vector<string> phone_book) {
    unordered_map<string, int> phone_map;
    for(int i = 0; i < phone_book.size(); ++i)
        phone_map.insert(make_pair(phone_book[i], 1));
    
    for(int i = 0; i < phone_book.size(); ++i){
        string phone_number = "";
        for(int j = 0; j < phone_book[i].size(); ++j){
            phone_number += phone_book[i][j];
            if(phone_map[phone_number] == 1 && phone_number != phone_book[i]){
                return false;
            }
        }
    }
    return true;
}
