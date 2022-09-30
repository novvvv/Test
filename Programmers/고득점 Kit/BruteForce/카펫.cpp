#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    vector<int> yellow_width;
    vector<int> yellow_height;
    int n = yellow;
    for(int i = yellow; i > 0 ; i--){
        if(i < yellow / i) break;
    	if(yellow % i == 0){
			yellow_width.push_back(i);
			yellow_height.push_back(yellow/i);
		}    
    }
    
    for(int i = 0; i < yellow_width.size(); ++i){
        if(yellow_width[i] * 2 + yellow_height[i] * 2 + 4 == brown){
            answer.push_back(yellow_width[i] + 2);
            answer.push_back(yellow_height[i] + 2);
        }
    }
    return answer;
}
