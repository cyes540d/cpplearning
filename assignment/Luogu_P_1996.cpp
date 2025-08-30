#include <bits/stdc++.h>
using namespace std;
int main () {
  int n, m;
  cin >> n >> m;
  queue<int> a;
  for(int i = 1; i < n + 1; i ++) {
    a.push(i);
  }
  int cnt = 1;
  while(!a.empty()) {
    int id = a.front();
     a.pop();
    if(cnt == m){
      cout << id << " ";   
      cnt = 1;   
    }
    else {
      a.push(id);
      cnt ++;
    }
  }
}
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//   int n, m;
//   cin >> n >> m;
//   vector<int> v(n);
//   for(int i = 0; i < n; i ++) {
//     v[i] = i;
//   }
//   int cnt = 1;
//   while(!v.empty()) {
//     for(int i = 0; i < v.size(); i ++) {
//       if(cnt == m) {
//         cout << v[i] + 1<< " ";
//         v.erase(v.begin() + i);
//         i --;
//         cnt = 1;
//       }
//       else {
//         cnt ++;
//       }
//     }
//   }
// }