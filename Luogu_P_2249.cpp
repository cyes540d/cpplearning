#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> x;
  x.reserve(n);
  while(n --) {
    int q;
    cin >> q;
    x.push_back(q);
    
  }
  while(m --) {
    int num;
    cin >> num;
    auto iter = lower_bound(x.begin(), x.end(), num);
    if(iter == x.end() || *iter != num) cout << -1 << " ";
    else cout << (iter - x.begin()) + 1 << " ";
  }
}