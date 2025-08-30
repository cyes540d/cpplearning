#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double x1,y1,x2,y2,x3,y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  double xab = x2 - x1;
  double xac = x3 - x1;
  double yab = y2 - y1;
  double yac = y3 - y1;
  cout << fixed;
  cout.precision(2);
  cout << abs(xab * yac - xac * yab)/2 << endl; 
}