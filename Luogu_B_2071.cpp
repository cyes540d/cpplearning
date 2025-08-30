#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int x = 2;
  for(;;x++){
    if(a % x == b % x && b % x == c % x) break;
  }
  cout << x << endl;
}