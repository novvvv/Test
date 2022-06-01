#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	int cnt = 0;
	for(int i = 0; i < s.length(); i++){
		if(cnt == 10){
			cnt = 0;
			cout << '\n';
		}
		cnt++;
		cout << s[i];
	}
	return 0;
}