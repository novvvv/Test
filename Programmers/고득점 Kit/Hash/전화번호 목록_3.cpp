#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> phone_list;
    for(const auto& i : phone_book)
        phone_list.insert(i);

    for(int i = 0; i < phone_book.size(); ++i){
        string temp_str = "";
        for(int j = 0; j < phone_book[i].size(); ++j){
            temp_str += phone_book[i][j];
            if(phone_list.find(temp_str) != phone_list.end() &&
              temp_str != phone_book[i]){
                return false;
                break;
            }
        }
    }
    return true;
}
