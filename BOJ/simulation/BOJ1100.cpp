#include <bits/stdc++.h>
using namespace std;
string board[8];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	for(int i = 0; i < 8; i++)
		cin >> board[i];
	int cnt = 0;
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			if(board[i][j] == 'F'){
				if((i % 2 == 0) && (j % 2 == 0)) cnt++;
				if((i % 2 == 1) && (j % 2 == 1)) cnt++;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}