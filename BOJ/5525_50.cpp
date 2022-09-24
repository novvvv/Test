#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	int n, m, cnt = 0;
	string s;
	cin >> n >> m >> s;
	
	int temp_n = n;
	string pn = "IOI";
	if(n >= 2){
		n--;
		while(n--){
			pn += "OI";
		}
	}
	
	for(int i = 0; i < s.size(); ++i){
		string temp_str = "";	
		for(int j = i; j < i + temp_n * 2 + 1; ++j){
			temp_str += s[j];
		}
		if(temp_str.compare(pn) == 0) cnt++;
	}
	cout << cnt << '\n';
	return 0; 
}
