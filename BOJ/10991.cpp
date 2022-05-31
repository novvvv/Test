#include <iostream>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int b = 1; b <= n - i; b++)
			cout << " ";
		for(int j = 1; j <= 2 * i -1; j++){
			if(j % 2 == 1) cout << "*";
			else cout << " ";
		}
		cout << '\n';
	}
	return 0;
}