#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  int sin[a][n];
  for(auto&line: sin) {
    for(auto&x: line) {
      cin >> x;
    }
  }
  // int sum[n] = {};
  vector<pair<int, int>> sum(n);
  for(int i = 0; i < n; i ++) {
    auto&[num, id] = sum[i];
    id = i + 1;
    for(int j = 0; j < a; j ++) {
      num += sin[j][i];
    }
  }
  int index = 0;
  for(int i = 1; i < n; i ++) {
    if(sin[b - 1][i] > sin[b - 1][index]) index = i;
  }
  // sort(sum.begin(), sum.end());
  // for(int i = 0; i < n; i ++) {
  //   cout << sum[i].second << " ";
  // }
  bool in = false;
  for(int i = n - 1; i > n - (m - 1) - 2; i --) {
    if(index + 1 == sum[i].second) {
      sum.erase(sum.begin() + i);
      sum.emplace_back(0,index + 1);
      in = true;
            cout <<"asfd";
      break;
    }
  }
  if(!in)sum.insert(sum.begin() + n - m + 1,{0,index + 1});
  for(int i = n - 1; i > n - (m - 1) - 2; i --) {
    cout << sum[i].second << " ";
  }
  // sort(sum.begin(), sum.end());
  // for(int i = n - 1; i >= n - m; i ++) {
  //   if(sin[b - 1] == sum[i].first) {
  //     sum.erase()
  //     sum.emplace_back(0,id);
  //   }

  // }
}