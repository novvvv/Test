#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> v(n);
	vector<int> rank(n, 1);
	for(int i = 0; i < n; ++i)
		cin >> v[i].first >> v[i].second;
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			// B의 덩치가 A의 덩치보다 크다면
			if((v[j].first > v[i].first) && (v[j].second > v[i].second))
				rank[i] += 1;
		}
	}
	
	for(const auto& i : rank){
		cout << i << " ";
	}
	return 0;
}
