#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

map<string, int> userCnt;  // 각 유저별로 신고당한 횟수를 저장하는 자료구조
map<string, set<string>> userLog; // 각각의 유저가 신고한 또 다른 유저의 정보를 저장하는 자료구조

// id_list : 사용자의 ID가 담긴 문자열 벡터
// report : 신고한 ID와 신고당한 ID가 공백으로 구분되어 저장된 정보가 담긴 문자열 벡터
// k : 정지 기준이 되는 신고 횟수
vector<int> solution(vector<string> id_list, vector<string> report, int k){
	vector<int> answer;
	for(string s : report){
		// 공백 기준 문자열 파싱
		int blank = s.find(" ");
		string from = s.substr(0, blank);
		string to = s.substr(blank);
		// user "from"이 user "to"를 신고한 이력이 없는 경우 로그를 갱신한다.
		// ** find 함수는 탐색에 실패했을 경우 마지막 이터레이터를 반환한다. **
		if(userLog[from].find(to) == userLog[from].end()){
			userLog[from].insert(to);
			userCnt[to]++;
		}
	}
	for(string id : id_list){
		int mail_cnt = 0;
		for(string str : userLog[id]){
			if(userCnt[str] >= k) mail_cnt++;
		}
		answer.push_back(mail_cnt);
	}
	return answer;
}