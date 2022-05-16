#include <string>
#include <vector>
using namespace std;

int solution(int num){
    long long n = num;
    int count = 0;
    while(true){
        if(n == 1){
            return count;
        }
        if(count >= 500){
            return -1;
        }
        if(n % 2 == 0){
            n = n / 2;
            count++;
        }
        else if(n % 2 == 1){
            n = n * 3 + 1;
            count++;
        }
    }
}
