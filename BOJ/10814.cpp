#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <algorithm>
using namespace std;

bool compare(const tuple<int, string, int>& t1, const tuple <int, string, int>& t2){
  if(get<0>(t1) == get<0>(t2))
    return get<2>(t1) < get<2>(t2);
  return get<0>(t1) < get<0>(t2);
}
int main(){
  vector<tuple<int, string, int>> info;
  int n;
  cin >> n;
  info.resize(n);
  for(int i = 0; i < n; ++i){
    cin >> get<0>(info[i]) >> get<1>(info[i]);
    get<2>(info[i]) = i;
  }
  sort(info.begin(), info.end(), compare);

  for(int i = 0; i < n; ++i)
    cout << get<0>(info[i]) << " " << get<1>(info[i]) << '\n';
  return 0;
}