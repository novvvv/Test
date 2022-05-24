#include <vector>
#include <iostream>
#include <algorithm> // to use unique
using namespace std;

vector<int> solution(vector<int> arr) 
{
    // unique begin ~ end 연속 중복 원소 제거
    // erase 중복되는 지점 첫 이터레이터 ~ arr.end(마지막 이터레이터) 제거
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    vector<int> answer = arr;
    return answer;
}