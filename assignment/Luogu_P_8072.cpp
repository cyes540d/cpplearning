#include <iostream>
using namespace std;
int main() {
  unsigned  k;
  cin >> k;
  unsigned m = bit_ceil(k);
  cout << m << " ";
  unsigned a = m;
  unsigned x = bit_width(k);


  cout << (bit_width(k)) - (countr_zero(k)) << endl;
}//countl_zero