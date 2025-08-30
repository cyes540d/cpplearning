#include <iostream>
using namespace std;
int main(){
  int x,y;
  cin >> x >> y;
  cout << ((x <= 1 && x >= -1 && y <= 1 && y >=-1)? "yes" : "no") << endl;
}