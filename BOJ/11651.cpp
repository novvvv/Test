#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int>& p1, const pair<int, int>& p2){
  if(p1.second == p2.second) // y좌표가 같으면
    return p1.first < p2.first; // x좌표 오름차 정렬
  return p1.second < p2.second; // y좌표가 다르면 y좌표 오름차 정렬
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  vector<pair<int, int>> xy;
  xy.resize(n);
  for(int i = 0; i < n; ++i){
    cin >> xy[i].first >> xy[i].second;
  }
  sort(xy.begin(), xy.end(), compare);
  for(int i = 0; i < n; ++i){
    cout << xy[i].first << " " << xy[i].second << '\n';
  }
  return 0;
}