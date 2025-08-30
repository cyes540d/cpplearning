#include <iostream>
#include <string>
using namespace std;
int main() {
  string str;
  cin >> str;
  string res;
  char m = str[0];
  int cnt = 0;
  for(auto& x: str) {
    if(x == m) {
      cnt ++;
    }else {
      cout << cnt << m;
      cnt = 1;
      m = x;    
    }
  }
  cout << cnt << m;
}