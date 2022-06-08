#include <vector> // vector
#include <iostream>
#include <algorithm> // sort
#include <tuple> // tuple
using namespace std;

bool compare(const tuple<string, int, int, int>& t1, 
			 const tuple<string, int, int, int>& t2){
	// 모든 점수가 같으면 이름 사전순
	if((get<1>(t1) == get<1>(t2)) && (get<2>(t1) == get<2>(t2)) && (get<3>(t1) == get<3>(t2)))
		return get<0>(t1) < get<0>(t2);
	// 국어 점수와 영어 점수가 같으면 수학 점수가 감소하는 순서
	else if((get<1>(t1) == get<1>(t2)) && (get<2>(t1) == get<2>(t2)))
		return get<3>(t1) > get<3>(t2);
	// 국어 점수가 같으면 영어 점수가 증가하는 순서
	else if(get<1>(t1) == get<1>(t2)) 
		return get<2>(t1) < get<2>(t2);
	// 국어 점수가 감소하는 순서
	return get<1>(t1) > get<1>(t2);
}

int main(){
	int n;
	cin >> n;
	vector<tuple<string, int, int ,int>> stu;
	stu.resize(n);
	for(int i = 0; i < n; ++i){
		cin >> get<0>(stu[i]) >> get<1>(stu[i]) >> get<2>(stu[i])
			>> get<3>(stu[i]);
	}
	
	sort(stu.begin(), stu.end(), compare);
	//test
	for(int i = 0; i < n; ++i)
		cout << get<0>(stu[i]) << '\n';
	return 0;
}
