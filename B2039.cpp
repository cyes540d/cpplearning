#include <iostream>
using namespace std;
int main(){
  int x,y;
  char a;
  cin >> x >> y;
  
  if(x>y) a = '>';
    else if (x == y) a = '=';
      else a = '<';
  cout << a << endl;
}