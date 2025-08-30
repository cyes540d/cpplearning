#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main() {
  int n, c;
  long long cnt = 0;
  cin >> n >> c;
  unordered_multiset<long long> s;
  while(n --) {
    long long x;
    cin >> x;
    s.insert(x);
  }
  // for(auto&x: s) {
  //   cout << x;
  // }
  auto it = s.begin();
  while(it != s.end()) {
    int i = s.count(*it);
    // cout << *it << endl;
    int j = s.count(c + *it);
    if(j != 0) {
      // cout << i << " " << j << endl;
      cnt += i * j;
      s.erase(*it);
      it = s.begin();
    }
    else it ++;
  }
  cout << cnt << endl;
}