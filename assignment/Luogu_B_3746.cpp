#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
int main () {
  using ll = long long;
  int n, m;
  cin >> n >> m;
  priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<>> pq;
  vector<vector<int>> v(n);
  for(int i = 0; i < n; i ++) pq.emplace(0,i);
  int cnt = 1;
  while(m --) {

    int t;
    cin >> t;
    auto[time,id] = pq.top();
    pq.pop();
    time += t;
    v[id].push_back(cnt);
    pq.emplace(time,id);
    cnt ++;
  }

    for(auto line: v) {
      for(auto x: line) {
        cout << x << " ";
      }
      if(line.empty()) cout << 0;
      cout << endl;
    }

  
}
// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;
// int main(){
//   int n,m;
//   cin >> n >> m;
//   vector<vector<int>> v(n);
//   // index.insert(index.begin(),vector<int>());

//   long long times[n] = {};
//   for(int cnt = 1; cnt < m + 1; cnt ++) {
//     int index = 0;
//     int x;
//     cin >> x;
//     long long mina = times[0] + 1;
//     // cout << times[0];
//     for(int i = 0; i < n; i++){
//       if(mina > times[i]) {
//         index = i;
//         mina = min(times[i],mina);      
//       }
//     }
//     // cout << index << " ";
//     times[index] += x;
//     v[index].push_back(cnt);
//   }
//   for(auto& line: v) {
//     for(auto& x: line) {
//       cout << x << " ";
//     }
//     if(line.empty()) cout << "0" << " ";
//     cout << endl;
//   }
// }