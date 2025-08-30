#include <iostream>
#include <vector>
using namespace std;
// int A(long long m, long long n) {
//   if(m == 0) {
//     return n + 1;
//   }
//   if(m > 0 && n == 0) return A(m - 1, 1);
//   if(m > 0 && n > 0) return A(m-1,A(m,n - 1));
// }
long long A(long long m, long long n, vector<vector<long long >> &v) {
  if(v[m][n] == -1) {
    if(m == 0) {
      v[0][n] = n + 1;
    }
    if(m > 0 && n == 0) v[m][n] = A(m - 1, 1, v);
    if(m > 0 && n > 0) v[m][n] = A(m - 1,A(m,n - 1, v),v); 
  }
  return v[m][n];
}
int main() {
  long long m,n;
  cin >> m >> n;
  vector<vector<long long >> v(m + 1,vector<long long>(10000,-1));
  cout << A(m,n,v);
}