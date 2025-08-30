#include <iostream>
using namespace std;
int main(){
  double x;
  cin >> x;
  cout << fixed;
  cout.precision(3);
  if(x < 5) cout << -x + 2.5;
    else if (x < 10) cout << 2 - 1.5 * (x - 3) * (x - 3);
      else cout << x / 2 - 1.5;
}