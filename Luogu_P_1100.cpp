#include <iostream>
#include <cmath>
using namespace std;
int main() {
  unsigned int x;
  cin >> x;
  unsigned int high = x;
  x = x << 16;
  high = high >> 16;
  high |= x;
  cout << high << endl;
}