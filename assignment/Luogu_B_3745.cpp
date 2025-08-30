#include <iostream>
#include <unordered_map>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main() {
  int n, m, r;
  cin >> n >> m >> r;
  vector<pair<int, int>> p1(n);
  vector<pair<int, int>> p2(n);//huase dianshu
  
  for(auto&[x, _]: p1) cin >> x;
  for(auto&[_, x]: p1) cin >> x;
  for(auto&[x, _]: p2) cin >> x;
  for(auto&[_, x]: p2) cin >> x;
  multiset<pair<int,int>> s(p2.begin(), p2.end());
  while(n --) {
    int id;
    cin >> id;
    auto& card = p1[id - 1];
    auto iter = s.upper_bound(card);
    if(iter != s.end() && iter->first == card.first) s.erase(iter);
  }

  cout << s.size() << endl;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//   int n,m,r;
//   cin >> n >> m >> r;
//   int p10[n];
//   int p11[n];
//   for(auto& x: p10) {
//     cin >> x;
//   }
//   for(auto& x: p11) {
//     cin >> x;
//   }
//   vector<int> p20(n);
//   vector<int> p21(n);
//   for(auto& x: p20) {
//     cin >> x;
//   }
//     for(auto& x: p21) {
//     cin >> x;
//   }
//   int shun[n];
//   for(auto& x: shun) {
//     cin >> x;
//   }
//   int cnt = 0;
//   // cout << "shun[0]==" << shun[0];
//   for(int i = 0; i < n; i ++) {
//     int outp = r + 1;
//     int index = -1;
//     for(int j = 0; j < n - cnt; j ++){
//       // cout << j << " " ;
//       // cout << p10[shun[i]] << p20[j] << p11[shun[i]] << p21[j];
//       // break;
//       if(p10[shun[i] - 1] == p20[j] && p11[shun[i] - 1] < p21[j]){
//           // cout << "fuhe1" << " " ;
//           // cout << endl << p20[0];
//         if(outp != min(outp,p21[j])){
//           // cout << "fuhe" << " " ;
//           outp = min(outp,p21[j]);
//           index = j;
//         }
//       }
//     }
//     if(index >= 0) {
//       cnt ++;
//       p20.erase(p20.begin() + index);
//       p21.erase(p21.begin() + index);
//     }
//   }
//   cout << n - cnt << endl;
// }