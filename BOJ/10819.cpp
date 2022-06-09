#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// About next_permutation
// 시작 위치, 끝 위치를 인수로 넘겨 해당 범위를 넘겨주면 인수로 넘긴 범위를 기준으로 다음 순열 모양새로
// 정렬한 후 true를 return한다. 다음 순열이 없다면 false를 return한다.

int main(){
	int n;
	cin >> n;
	vector<int> v;
	v.resize(n);
	
	for(int i = 0; i < n; ++i)
		cin >> v[i];
	
	int max_value = 0;
	sort(v.begin(), v.end());
	do{
		int max_tmp = 0;
		for(int i = 0; i < n - 1; ++i)
			max_tmp += abs(v[i] - v[i+1]);
		max_value = max(max_tmp, max_value);
	}while(next_permutation(v.begin(), v.end()));
	
	cout << max_value;
	return 0;
}
