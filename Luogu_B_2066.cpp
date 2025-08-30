#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  double time = 0;
  while(n--){
    double x,y,p;
    cin >> x >> y >> p;
    double d = hypot(x,y);
    time += 1.5 * p + d * 2 / 50;
  }
  cout << int(ceil(time)) << endl;
  
}