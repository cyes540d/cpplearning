#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  // double e = 0;
  // while (n){
  //   double x = n;
  //   double x_ = 1;
  //   while (x) {
  //     x_ *= x;
  //     x--;
  //   }
  //   e += 1.0 / x_;
  //   n--;
  // }
  // cout << fixed;
  // cout.precision(10);
  // cout << e + 1;
  double e = 2;
  long long arr[n] = {1,1};
  for(int k = 2;k <= n;k ++){
    arr[k] = arr[k - 1] * k;
    e += 1.0 / arr[k];
  }
  cout << fixed;
  cout.precision(10);
  cout << e;
}