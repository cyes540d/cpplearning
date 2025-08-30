#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double h,r;
  double pi = 3.14;
  cin >> h >> r;
  double sing = pi * r * r * h;  
  cout << ceil(20000/sing) << endl; 

}