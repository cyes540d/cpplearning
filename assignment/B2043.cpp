#include <iostream>
using namespace std;
int main(){
  int x;
  cin >> x;
  if(x % 105 == 0) cout << "3 5 7";
    else if (x % 3 != 0 && x % 5 != 0 && x % 7 != 0) cout << "n";
      else if(x % 15 == 0) cout << "3 5";
        else if(x % 21 == 0) cout << "3 7";
          else cout << "5 7";
}