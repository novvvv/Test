#include <bits/stdc++.h>
using namespace std;

int n = 5;
int k = 3;
int a[5] = {1, 2, 3, 4, 5};
int main() {
    // 순서 상관 x
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < i; ++j){
            for(int k = 0; k < j; ++k){
                cout << i << " : " << j << " : " << k << "\n";
            }
        }
    }

    // 순서 상관 o 
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            for(int k = j + 1; k < n; ++k){
                cout << i << " : " << j << " : " << k << "\n";
            }
        }
    }   

    // 2개를 뽑는다? -> 중첩 for문 2개
    // 3개를 뽑는다? -> 중첩 for문 3개 
    return 0;
}
