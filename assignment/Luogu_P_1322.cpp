#include <iostream>
using namespace std;
int f() {
  int s = 0;
  string str;
  while(cin >> str) {
    if(str[0] == 'F') {
      int x;
      cin >> x;
      s += x;
    } else if (str[0] == 'B') {
      int x;
      cin >> x;
      s -= x;
    } else if (str[0] == 'R') {
      int cnt;
      cin >> cnt;
      char asdf;
      cin >> asdf;
      s += cnt * f();
    } else if (str[0] == ']') {
      return s;
    } 
  }
  return s;
}
int main() {
  cout << abs(f()) << endl;
}