#include <bits/stdc++.h>
using namespace std;

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
  sort(xy.begin(), xy.end());
  for(int i = 0; i < n; ++i){
    cout << xy[i].first << " " << xy[i].second << '\n';
  }
  return 0;
}