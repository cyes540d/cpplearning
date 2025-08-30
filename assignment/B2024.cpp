#include <stdio.h>
#include <iostream>
#include <format>
using namespace std;
int main(){
  double a;
  // scanf("%lf",&a);
  // printf("%lf\n%.5lf\n%le\n%lg\n",a,a,a,a);
  cin >> a;
  // cout << fixed;
  // cout << a << endl;
  // cout.precision(5);
  // cout << a << endl;
  // cout.precision(6);
  // cout << scientific;
  // cout << a << endl;
  // cout << defaultfloat;
  // cout << a << endl;
  cout << format("{0:f}\n{0:.5f}\n{0:e}\n{0:g}\n",a);
}
