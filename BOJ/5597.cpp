#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	bool data[30] = {false, };
	vector<int> v;
	int temp;
	for(int i = 0; i < 28; ++i){
		cin >> temp;
		v.push_back(temp);
	}
	
	for(int i = 0; i < v.size(); ++i)
		data[v[i] - 1] = true;
	
	vector<int> ans;
	for(int i = 0; i < 30; ++i)
		if(data[i] == false) ans.push_back(i + 1);
	sort(ans.begin(), ans.end());
	
	for(int i = 0; i < ans.size(); ++i)
		cout << ans[i] << '\n';
	
	
	return 0;
}

// ..dataset 1 ~ 30