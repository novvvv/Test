#include <iostream>
using namespace std;

int main(){
	int year = 1;
	int E, S, M;
	cin >> E >> S >> M;
	while(true){
		if((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0){
			cout << year << endl;
			break;
		}
		else
			year++;
	}
	return 0;
}
