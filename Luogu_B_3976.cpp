#include<iostream>
#include<cctype>
using namespace std;
int main() {
  string str;
  cin >> str;
  // int cnt = 0;
  for(int i = 0; i < str.length(); i ++) {
    if(!isalpha(str[i])) {
      str.erase(i,1);
      i --;
      // cnt ++;
      // cout << cnt ;
    }
  }
  cout << str;
}