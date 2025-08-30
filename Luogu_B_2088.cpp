#include <iostream>
using namespace std;
int main(){
  int arr[10];
  for(auto & x:arr){
    cin >> x;
  }
  double sum = 0;
  double arr0[10] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
  for (int x = 0;x < 10; x ++) {
    sum += arr[x] * arr0[x];
  }
  cout << fixed;
  cout.precision(1);
  cout << sum << endl;
}