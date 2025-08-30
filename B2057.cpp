#include <iostream>
using namespace std;
int main(){
  int max = 0,n;
  cin >> n;
  for (int cnt = 0;cnt < n;cnt ++) {
    int x;
    cin >> x;
    if (x > max) max = x;
  }
  cout << max << endl;
}