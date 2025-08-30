#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int m, n;
  cin >> m >> n;
  // vector<pair<int, int>> a(m,pair<int, int>());
  auto a = vector(m,pair<int, int>());
  for(int i = 1; auto&[score,id]: a) {
    id = i;
    score = 0;
    i ++;
    int cnt = n;
    int x;
    while(cnt --) {
      cin >> x;
      score += x;
    }    
  }
// for(int i = 1; auto&[score,id]: a) {
//   cout << score << endl;
//   }
  sort(a.begin(), a.end(), [](auto& a, auto& b) {
    auto&[f,_] = a;
    auto&[g,__] = b;
    if(f != g)return f > g;
    else return _ < __;
  });
  cout << a[0].second << endl << a[1].second;
  // vector<vector<int>> a(m,vector<int>(n));
  // for(auto& line: a) {
  //   for(auto& x: line) {
  //     cin >> x;
  //   }
  // }
  // int sum[m];
  // for(int i = 0; i < m; i ++) {
  //   for(int j = 0; j < n; j ++) {
  //     sum[i] += a[i][j];
  //   }
  // }

  // pair<int, int> max(sum[0], sum[0]);

  // int index = 0, index2 = 0;
  // for(int i = 1; i < m; i ++) {
  //   if (sum[index] < sum[i]) index = i;
  //   if(sum[index2] < sum[i] && sum[i] < max) index2 = sum;
  // }
}