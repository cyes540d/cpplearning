#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
int main() {
  using ll = long long;
  
  ll n, q;
  cin >> n >> q;
  
  unordered_map<ll,unordered_map<ll, ll>> a(n);
  
  while(q --) {
    int num,i,j,k;
    cin >> num >> i >> j;
    switch(num) {
      case 1:
        cin >> k;
        a[i][j] = k;
        break;
      case 2:
        cout << a[i][j] << endl;
        // cout << a[i][j].second << endl;
        break;
    }
  }
}