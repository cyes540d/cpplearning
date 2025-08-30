#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int n,q;
  cin >> n >> q;
  vector<string> s(n);
  for(auto& x:s) {
    cin >> x;
  }
  while(q --) {
    int x;
    cin >> x;
    if(x == 1) {
      int q,y,i;
      cin >> q >> y >> i;
      s[y - 1].insert(i, s[q - 1]);
    }
    if(x == 2) {
      int q;
      cin >> q;
      cout << s[q - 1] << endl;
    }
  }

}