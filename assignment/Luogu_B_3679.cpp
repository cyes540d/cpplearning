#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
  int n, k, t;
  cin >> n >> k >> t;
  auto all = vector(n,pair<int, int>());
  for(auto&[x, y]: all) {
    cin >> x >> y;
  }
  auto born = vector(k,pair<int, int>());
  for(auto&[x, y]: born) {
    cin >> x >> y;
  }
  auto find = vector(t,pair<int, int>());
  for(auto&[x, y]: find) {
    cin >> x >> y;
  }
  auto dis = vector(t,vector(n,0.0));
  // vector<vector<pair<int, int>>> dis(t,vector<int>(n,0));
  for(int i = 0; i < t; i ++) {
    for(int j = 0; j < n; j ++) {
      dis[i][j] = hypot(find[i].first - all[j].first, find[i].second - all[j].second); 
    }
  }
  int cnt = 0;
  for(int i = 0; i < t; i ++) {

    int index;
    double max = *max_element(dis[i].begin(),dis[i].end());
    for(int j = 0; j < n; j ++) {      
      if(max == dis[i][j]){
        index = j;
        break;
      }
    }
    for(int j = 0; j < k; j ++) {
      if(born[j] == all[index]) {
        cnt ++;
        break;
      }
    }
  }
  cout << cnt << endl;
}