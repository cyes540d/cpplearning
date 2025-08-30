#include <iostream>
#include <string>
using namespace std;
int main() {
  string str;
  cin >> str;
  int x = 0;
  int cnt = 0;
  for(int i = 0; i < str.length(); i ++){
    x = str.find("luogu", x + 1);
    if(x != -1) {
      cnt ++;
    } else break;
  }
  cout << cnt ;
}