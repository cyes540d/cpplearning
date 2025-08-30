#include <iostream>
#include<cmath>
using namespace std;
int main(){
  double xa,ya,xb,yb;
  cin >> xa >> ya >> xb >> yb;
  cout << fixed;
  cout.precision(3); 
  // cout << sqrt(pow(xb - xa,2) + (pow(ya - yb,2)));
  cout << hypot(xa - xb,ya - yb);
}