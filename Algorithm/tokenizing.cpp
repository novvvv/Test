#include <bits/stdc++.h>
using namespace std;

// time-complexity O(n)
vector<string> split(string input, string delimiter) {
  vector<string> ret;
  long long pos = 0;
  string token = "";

  // pos = input.find(delimiter)
  // delimiter(구분자)를 찾을 때 까지 루프를 반복한다.
  while ((pos = input.find(delimiter)) != string::npos) {
    // delimiter를 찾은 경우 : 해당하는 pos까지 부분 문자열을 추출한다.
    // 예를 들어 abcd에서 d(delimiter)를 찾았다면 pos는 3을 반환하며, 3만큼의
    // 문자열 abc를 추출한다. 즉, token은 "abc"가 된다.
    token = input.substr(0, pos);

    // 추출한 문자열은 ret 이라는 배열에 저장한다.
    ret.push_back(token);

    // 앞에서 부터 문자열을 제거한다. 예를들어 abcdabc에서 d가 delimiter라면
    // pos = 3, delimeter size = 1이기에 앞에서 부터 4크기의 문자열을 제거하면,
    // abc가 남게 된다.
    input.erase(0, pos + delimiter.length());
  }
  ret.push_back(input);
  return ret;
}

int main() {
  string s = "Hello My name is Nov!", d = " ";
  vector<string> a = split(s, d);
  for (string b : a)
    cout << b << "\n";
}
