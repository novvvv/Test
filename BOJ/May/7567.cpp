#include <bits/stdc++.h>
using namespace std;
string bowl;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> bowl;
	char tempChar = bowl[0];
	int ans = 10;
	for(int i = 1; i < bowl.length(); i++){
		if(bowl[i] == tempChar) ans += 5;
		else ans += 10;
		tempChar = bowl[i];
	}
	cout << ans;
	return 0;
}