#include <iostream>
using namespace std;
int main () {
  using ll = long long;
  unsigned long long n, q;
  cin >> n >> q;
  int sum = 0;
  while(q --) {
    ll x;
    cin >> x;
    ll a = 1 << (x - 1);
    if(!((n >> (x - 1))&1)) {
      ll m = n >> x << x;
      m = m | a;
      sum += m - n; 
      n = m;
    }
  }
  cout << sum << endl;
}