#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double a;
  char c;
  cin >> a >> c;
  (int)c == (int)'n' ? (a <= 1000 ? cout << 8 : cout << (8 + ceil((a - 1000) / 500) * 4)) : (a <= 1000 ? cout << 13 : cout << (13 + ceil((a - 1000) / 500) * 4));
}