#include <iostream>
using namespace std;
int main(){
  int x;
  cin >> x;
  double bike,walk;
  bike = 50 + x / 3.0;
  walk = x / 1.2;
  if(bike == walk) cout << "All";
    else if (bike < walk) cout << "Bike";
      else cout << "Walk";
}