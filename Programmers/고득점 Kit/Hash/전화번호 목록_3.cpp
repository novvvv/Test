#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> phone_set;
    for(int i = 0; i < phone_book.size(); ++i)
        phone_set.insert(phone_book[i]);
    
    unordered_set<string>::iterator it;
    for(int i = 0; i < phone_book.size(); ++i){
        string phone_number = "";
        for(int j = 0; j < phone_book[i].size(); ++j){
            phone_number += phone_book[i][j];
            it = phone_set.find(phone_number);
            if(it != phone_set.end() && phone_number != phone_book[i]){
                return false;
            }
        }
    }
    return true;
}
