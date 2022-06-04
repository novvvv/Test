#include <iostream>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	for(int i = 1; i <= n; ++i){
		for(int b = n; b > i; b--){
			cout << " ";
		}
		for(int j = 1; j <= i; j++){
			cout << "*";
		}
		for(int k = 2; k <= i; k++){
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}