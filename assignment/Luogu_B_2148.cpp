#include <iostream>
using namespace std;
double f(double x, int n) {
  if(n == 1) return double(x / (1 + x));
  return double(x / (n + f(x, n - 1)));
}
int main() {
  double x;
  int n;
  cin >> x >> n;
  cout << fixed;
  cout.precision(2);
  cout << f(x,n) << endl;
}