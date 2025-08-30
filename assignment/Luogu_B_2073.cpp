// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//   int a,b,n;
//   cin >> a >> b >> n;
//   // unsigned long long an0;
//   // an0 = floor(pow(10,n) * a / b);
//   // long long an1 = an0 - an0 / 10 * 10;
//   // cout << an1;
//   a %= b;
//   int x;
//   while(n--) {
//     a *= 10;
//     x = a / b;
//     a %= b;
//   }
//   cout << x;
// }
#include <iostream>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  int n;
  cin >> n;
  int out;
  while(n --) {
    a %= b;
    a *= 10;
    out = a / b;

  }
  cout << out;
}
