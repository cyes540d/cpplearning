#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
unsigned f(unsigned a, unsigned b) {
  if((a & b) == 0) return a ^ b;
  f(a ^ b, (a & b) << 1);
}
int main() {
  cout << f(100,2);
}