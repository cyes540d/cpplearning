#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  for(int i = 0; i < n; i ++) {
    int x;
    cin >> x;
    v[i] = x;
  }
  unordered_set<int> b(m);
  for(int i = 0; i < m; i ++) {
    int x;
    cin >> x;
    b.insert(x);
  }
  for(auto& x: v) {
    if(b.find(x) != b.end()) cout << x << " ";
  }
  cout << endl;

}