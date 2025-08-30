#include <iostream>
using namespace std;
int main(){
  double r,p = 3.14159;
  cin >> r;
  cout << fixed;
  cout.precision(4);
  cout << 2 * r <<" " <<2 * p * r <<" "<< p * r * r << endl;
}