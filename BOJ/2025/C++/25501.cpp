/**
 * BOJ25501
 * 2025.01.16
 * nov2pro
 */

#include <iostream>
#include <cstring>
using namespace std;

int call_recursion_count = 0;

int recursion(const char* s, int l, int r){
    call_recursion_count++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

// 팰린드롬 o -> 1 반환, 팰린드롬 x -> 0 반환
int isPalindrome(const char* s){
    return recursion(s, 0, strlen(s)-1);
}

// 팰린드롬 여부를 반환값으로 알아내며, 판별 과정에서 recursion 함수가 몇 번 호출됐는가

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++) {
        string palin_str;
        cin >> palin_str;
        call_recursion_count = 0;
        cout << isPalindrome(palin_str.c_str()) << " " << call_recursion_count << '\n';
    }

    return 0;
}

