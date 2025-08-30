#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
  using ll = long long;
  int n;
  cin >> n;
  multiset<ll> coins;
  for (int i = 0; i < n; i ++) {
    ll x;
    cin >> x;
    coins.emplace(x);
  }
  vector<ll> ps(2, 0);
  int cnt = 0;
  while(!coins.empty()) {
    ll i = cnt % 2;
    auto iter = coins.upper_bound(ps[i]);
    
    if(iter == coins.begin()){
      ps[i] += *iter;
      coins.erase(iter);
    } else {
      ps[i] += *(--iter);
      coins.erase(iter);
    }
    cnt ++;
  }
  cout << ps[0] << " " << ps[1] << endl;
}
// // // /*
// // // 你的代码在处理 “存在不超过当前钱包总额的硬币” 时存在逻辑漏洞，会导致错误选择硬币。具体来说，当超过钱包总额的硬币先出现时，会错误覆盖本应选择的 “不超过总额的最大硬币”，核心问题是选择逻辑的遍历顺序干扰了优先级判断。*/
// // // /*第二种情况就是最小值*/
// // // #include <iostream>
// // // #include <vector>
// // // #include <algorithm>
// // // #include <cmath>
// // // using namespace std;
// // // int main(){
// // //   int n;
// // //   cin >> n;
// // //   vector<long long> a(n);
// // //   for(auto& x: a) {
// // //     cin >> x;
// // //   }
// // //   long long F = 0, B = 0;
// // //   for(int cnt = 0; cnt < n; cnt ++) {
// // //     if(cnt % 2 == 0){ 
// // //       int index = -1;
// // //       long long qu = 0;
// // //       bool order = false;
// // //       for(int i = 0; i < a.size(); i ++) {
// // //         if(F >= a.at(i) /*&& (index == -1 || qu < a.at(i))*/) {
// // //           if(!order) qu = 0;
// // //           order = true;
// // //           if(index == -1 || (qu < a.at(i)) ){
// // //           qu = a.at(i);
// // //           index = i;
// // //         }
// // //         } 
// // //         if(order == false && (index == -1 || qu > a.at(i)) && F < a.at(i)) {
// // //           qu = a.at(i);
// // //           index = i;
// // //         }
// // //       }
// // //       F += qu;
// // //       a.erase(a.begin() + index);
// // //     }
// // //     if(cnt % 2 != 0){ 
// // //       int index = -1;
// // //       long long qu = 0;
// // //       bool order = false;
// // //       for(int i = 0; i < a.size(); i ++) {
// // //         if(B >= a.at(i) /*&& (index == -1 || qu < a.at(i))*/) {
// // //           if(!order) qu = 0;
// // //           order = true;
// // //           if(index == -1 || qu < a.at(i)){
// // //           qu = a.at(i);
// // //           index = i;
// // //         } 
// // //         }
// // //         if(order == false && (index == -1 || qu > a.at(i)) && B < a.at(i)) {
// // //           qu = a.at(i);
// // //           index = i;
// // //         }
// // //       }
// // //       B += qu;
// // //       a.erase(a.begin() + index);
// // //     }
// // //   }
// // //   cout << F << " " << B << endl;
// // // }
// // #include <iostream>
// // #include <vector>
// // #include <cmath>
// // using namespace std;
// // void choose(vector<long long>& a, long long&  wallet) {
// //   int index = -1;
// //   int mini = 0;
// //   long long xiao = 0;
// //   for(int i = 0; i < a.size(); i ++) {
// //     // cout << a[i];
// //     if(wallet >= a[i]) {
// //       if(xiao < a[i]) {
// //         index = i;
// //         xiao = a[i];
// //       } 
// //     }
// //     // cout << mini;
// //     if(wallet < a[i]) {     
// //         if(a[mini] >= a[i]) mini = i;
// //         // cout << mini;
// //       }
      
// //     }
  

// //   if(index == -1) index = mini;
// //   // cout << a.at(index);
// //   // cout << wallet;
// //   wallet += a[index];
// //   // cout << wallet;
// //   a.erase(a.begin() + index);
// // }
// // int main() {
// //   int n;
// //   cin >> n;
// //   vector<long long> a(n);
// //   for(auto& x: a) {
// //     cin >> x;
// //   }
// //   vector<long long> ps(2,0);
// //   for(int i = 0; i < n; i ++) {
// //     if(i % 2 == 0) choose(a, ps[0]);
// //     else choose(a,ps[1]);
// //     // cout << a[0];
// //   }
// //   cout << ps[0] << " " << ps[1];

// // }
// #include <iostream>
// #include <vector>
// using namespace std;
// void getCoin(vector<long long>& coins, long long& p) {
//   int index = -1;
//   int mini = 0;
//   for(size_t i = 0; i < coins.size(); i ++) {
//     if(coins[i] <= p && (index == -1 || coins[index] < coins[i])) {
//       index = i;
//     } else if(coins[i] > p && coins[mini] > coins[i]) {
//       mini = i;
//     }
//   }
//   if(index == -1) index = mini;
//   p += coins[index];
//   coins.erase(coins.begin() + index);

// }
// int main() {
//   int n;
//   cin >> n;
//   vector<long long> coins(n);
//   for(auto& x: coins) {
//     cin >> x;
//   }
//   vector<long long> players(2,0);
//   for(int i = 0; i < n; i ++) {
//     getCoin(coins,players[i % 2]);
//     // cout << players[i % 2] << " ";
//   }
//   cout << players[0] << " " << players[1];
// }