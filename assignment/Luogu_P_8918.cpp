#include <iostream>

using namespace std;
int main() {
  int T;
  cin >> T;
  while(T--) {
    int x;
    cin >> x;
    if(x & 1) {
      cout << 32 - __builtin_clz(x) << endl;
    }
    else cout << -1 << endl;
  }
}
