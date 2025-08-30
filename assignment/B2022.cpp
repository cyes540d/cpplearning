#include <stdio.h>
#include <iostream>
#include  <format>
using namespace std;
int main(){
  double a;
  // scanf("%lf",&a);
  // printf("%.12lf",a);
  cin >> a;
  // cout<<fixed;
  // cout.precision(12);
  // cout << a;
  cout << format("{:.12f}",a);
}