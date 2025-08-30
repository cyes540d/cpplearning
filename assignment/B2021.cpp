#include <stdio.h>
#include <iostream>
#include <format>
using namespace std;
int main(){
  double a;
  // scanf("%lf",&a);
  // printf("%.3lf",a);

  cin >> a;
  // cout << fixed;
  // cout.precision(3);
  // cout << a;
  cout << format("{:.{}f}",a,3);
}