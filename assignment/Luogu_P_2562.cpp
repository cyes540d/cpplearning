#include <iostream>
using namespace std;

void f(string &s) {
  int l = s.size();
  int m = l / 2;

  bool all = true;
  for(int i = 0; i < l - 1; i ++) {
    if(s[i] != s[i + 1]) {
      all = false;
      break;
    }
  }
  if(all) {
    if(s[0] == '0') {
      s = "A";
    } else {
      s = "B";
    }
    // cout << s;
    return;
  }
  else {
    string s1 = s.substr(0, m);
    string s2 = s.substr(m);
    f(s1);
    f(s2);
    s.replace(0,m,s1);
    s.replace(s1.size(),m,s2);
    s.insert(0,1,'C');
  }
  

}

int main() {
  string s;
  cin >> s;
  f(s);
  cout << s;
}