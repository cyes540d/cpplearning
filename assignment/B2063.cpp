#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int x,n;
  cin >> x >> n;
  cout << fixed;
  cout.precision(4);
  cout<<x * pow(1.001,n)<<endl;
}