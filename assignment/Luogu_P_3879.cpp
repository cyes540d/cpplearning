#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, l,m;
  cin >> n ;
  vector<unordered_set<string>> v(n);
  for(int i = 0; i < n; i ++){
    int l;
    cin >> l;
    while(l --) {
      string str;
      cin >> str;
      v[i].insert(str);
    }
  }
  cin >> m;
  while(m --) {
    string str;
    cin >> str;
    for(int i = 0; i < n; i ++) {
      if(v[i].find(str)!=v[i].end()) cout << i + 1 << " "; 
    }
    cout << endl;
  }
}