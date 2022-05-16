#include <string>
#include <vector>
using namespace std;

long long solution(long long n) {
    bool flag = false;
    long long temp = 0;
    for(long long i = 1; i <= n; i++){
        if((i * i) == n){
            flag = true;
            temp = i;
            break;
        }
    }
    if(flag) return (temp + 1) * (temp + 1);
    else return -1;
}
