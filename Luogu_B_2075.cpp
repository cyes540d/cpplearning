#include <iostream>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  int x = 1;
  while(b--) {
    x *= a;
    if(x >=1000) x %= 1000;
  }
  cout.width(3);
  cout.fill('0');
  cout << x;
}