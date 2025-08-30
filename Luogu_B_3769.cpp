#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
  string s,t;
  cin >> s >> t;
  int q;
  cin >> q;
  for(int i = 0; i < q; i ++) {
    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    string subs = s.substr(l1 - 1, r1 - l1 + 1);
    string subt = t.substr(l2 - 1, r2 - l2 + 1);
    auto order = subs <=> subt;
    if(order == 0) {
      cout << "ovo" << endl;
    }else if (order > 0) {
      cout << "erfusuer" << endl;
    }else cout << "yifusuyi" << endl;
  }
}