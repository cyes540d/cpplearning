#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int sum = 0;
  for(int cnt = 0;cnt < n;cnt++){
    int a;
    cin >> a;
    sum += a;
  }
  cout << sum;
  cout << fixed;
  cout.precision(5);
  cout << " " << (double)sum / n << endl;
}
