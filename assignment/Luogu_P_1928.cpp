//【后面必定数字
#include <iostream>
using namespace std;
string f(string&s, int &i) {
  string str;
  string ans;
  int x = 1;
  for(;i < s.length(); i ++) {
    if(isalpha(s[i])) {
      str += s[i];
    }else if(s[i] == '[') {
      str += f(s,++i);
    }else if(s[i] == ']') {
      x -= 1;
      string s1 = str;
      while(x--) {
        str += s1;
      }
      return str;
    }else {
      if( isdigit(s[i]) && !(isdigit(s[i + 1]))) {
        x = s[i] - '0';
      }else {
        x = (s[i] - '0') * 10 + (s[i + 1] - '0');
        i ++;
      }      
    }
  }
  return str;
}
int main() {
  string s;
  int i = 0;
  cin >> s;
  cout << f(s,i);
  cout << endl;
}