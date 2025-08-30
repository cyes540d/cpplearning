#include <iostream>
#include <format>
#include <cmath>
using namespace std;
char toChar(int x) {
  if(x > 9){
    return char(x + 'A' - 10);
  } else return char(x + '0');
}
string toBase(int s,int P) {
  string str;
  str.push_back(toChar(s % P));
  s /= P;
  while(s != 0) {
    str.insert(0, 1,toChar(s % P));
    s /= P;
  }
  return str;
}
int main() {
  int P;
  cin >> P;
  for(int i = 1; i < P; i ++) {
    for(int j = 1; j <= i; j ++) {
      int s = j * i;
      cout << format("{}*{}=",toChar(i),toChar(j));
      cout << toBase(s,P) << " ";
    }
    cout << endl;
  }
}