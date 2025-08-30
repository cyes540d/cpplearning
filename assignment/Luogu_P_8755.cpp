/*
2 6台数，任务数
5 5每台的能力
1 1 5 3
2 2 2 6
3 1 2 3
4 1 6 1
5 1 3 3
6 1 3 4
time，id，usetime,xiaohao
递增
*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;
int main() {
  using ll = long long;
  using pll = pair<long long,long long>;
  int n, m;
  cin >> n >> m;
  // unordered_map<long long ,vector<pair<long long ,long long>>> adsf(n);
  vector<pair<long long ,priority_queue<pair<long long ,long long>,vector<pll>,greater<pll>>>> v(n);
  for(auto& [x, _]: v) cin >> x;//剩余算力，结束时刻，消耗算力
  while(m --) {
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    auto& [x, vi] = v[b - 1];
    while(1){
      if(vi.empty()) break;
      auto&[time, use] = vi.top();
      if(a >= time) {
        x += use;
        vi.pop();
      }else break;
    }

    if(x >= d) {
      x -= d;
      vi.emplace(a + c,d);
      cout << x << endl;
    } else {
      cout << -1 << endl;
    }
  }
}