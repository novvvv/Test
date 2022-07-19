#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> v;
	int temp;
	for(int i = 0; i < n; ++i){
		cin >> temp;
		v.push_back(temp);
	}
	
	int key;
	int ans = 0;
	cin >> key;
	for(int i = 0; i < n; ++i)
		if(v[i] == key) ans++;
	
	cout << ans << '\n';
	return 0;
}