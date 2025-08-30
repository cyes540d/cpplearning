#include <iostream>
#include <cmath>
#include <format>
using namespace std;
int main(){
  double a,b,c;
  cin >> a >> b >> c;
  cout << fixed;
  cout.precision(5);
  double delta = b * b - 4 * a * c;
  double x1 = (-b - sqrt(delta)) / (2 * a);
  double x2 = (-b + sqrt(delta)) / (2 * a);
  // if(delta == 0)  cout << "x1=x2=" << x1;
  //   else if (delta < 0) cout << "NO answer!";
  //     else if(x1 < x2)cout << format("x1={0:.5f};x2={1:.5f}",x1,x2);
  //       else if(x1 > x2)cout << format("x1={0:.5f};x2={1:.5f}",x2,x1);
  if(x1 == x2)  cout << "x1=x2=" << x1;
    else if (delta < 0) cout << "No answer!";
      else if(x1 < x2)cout << format("x1={0:.5f};x2={1:.5f}",x1,x2);
        else if(x1 > x2)cout << format("x1={0:.5f};x2={1:.5f}",x2,x1);
}