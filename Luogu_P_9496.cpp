#include <iostream>
#include <bit>
using namespace std;
int main() {
  int T;
  cin >> T;
  while(T--) {
    unsigned long long  n, m;
    cin >> n >> m;
    if(n == m){
      cout << 0 << endl;
    } else if(((m^n)&m)==(m^n)||((m^n)&n)==(m^n)) {
      cout << 1 << endl;
    } else {
      cout << 2 << endl;
    }


  }
}