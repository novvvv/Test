#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int l = 0;
	for(int i = 0; i < n; ++i){
		for(int b = 0; b < i; ++b){
			cout << " ";
		}
		for(int j = l; j < 2 * n - 1; ++j){
			cout << "*";
		}
		l += 2;
		cout << '\n';
	}
	for(int i = 1; i <= n - 1; ++i){
		for(int b = i + 1; b <= n - 1; ++b){
			cout << " ";
		}
		for(int j = 1; j <= i * 2 + 1; ++j){
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}
