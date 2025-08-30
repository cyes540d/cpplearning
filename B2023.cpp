#include <stdio.h>
#include <iostream>
#include <format>
using namespace std;
int main(){
  char a;
  int b;
  float c;
  double d;
  cin >> a >> b >> c >> d ;
  // cout << fixed;
  // cout.precision(6);
  // cout << a << " "
  //      << b << " "
  //      << c << " "
  //      << d;
  cout << format("{} {} {:.6f} {:.6f}",a,b,c,d);
}