#include <bits/stdc++.h>
using namespace std;

int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};
void print(vector<int>b){
    for(int i : b) cout << i << " ";
    cout << '\n';
}
void combi(int start, vector<int> b){
    // base condition
    // vector의 size가 k번 뽑힌 경우 print 한다. 
    if(b.size() == k){
        print(b);
        return;
    }
    // index를 기반으로 탐색한다. 
    for(int i = start + 1; i < n; ++i){
        b.push_back(i);
        combi(i, b);
        b.pop_back(); // back-tracking  
    }
    return; 
} 

int main(){
    vector<int> b;
    combi(-1, b);
    return 0;
}
