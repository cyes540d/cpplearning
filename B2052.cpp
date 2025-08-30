#include <iostream>
using namespace std;
int main(){
  int x,y;
  char c;
  cin >> x >> y >> c;
  switch(;c) {
    case '+':
      cout << x + y << endl;
      break;
    case '-':
      cout << x - y << endl;
      break;
    case '*':
      cout << x * y << endl;
      break;
    case '/':
      if(y == 0) cout << "Divided by zero!";
      else cout << x / y << endl;
      break;
    default :
      puts("Invalid operator!");
    }
}
