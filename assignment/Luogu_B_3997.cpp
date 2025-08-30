#include <iostream>
#include <string>
using namespace std;
int main() {
  string str;
  cin >> str;
  int a = 0;
  int cnt = 0;
  string sub = " ";
  for(int n = 0; ; n ++) {
    a = (n * (n + 1)) / 2;
    if(a < str.length())sub = str.substr(a, n + 1);
    else break;
    // cout << sub << " ";
    // cout << n << endl;
    bool judge = true;
    for(int i = 0, j = sub.length() - 1; i < j; i ++, j --) {
      if(sub[i] != sub[j]) {
        judge = false;
        break;
      }
    }
    if(judge) {
      cnt ++;
    }    
  }
  cout << cnt;
}