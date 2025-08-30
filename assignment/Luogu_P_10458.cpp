#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void f(auto& matrix, int x, int y, int size) {
  // if(size = 1) 
  if(size == 1) {
    matrix[x][y] = 'X';
    return;
  }
    int m1 = size / 3;
  int m2 = m1 * 2;
  // matrix[x + m1][y] = matrix[x + m1][y + m1] = matrix[x + m2][y + m1] = matrix[x][y + m2] = matrix[x + m2][y + m2] = 'X';
  f(matrix, x + m1, y + m1, m1);
  f(matrix, x + m2, y, m1);
  f(matrix, x, y + m2, m1);
  f(matrix, x + m2, y + m2, m1);
  f(matrix, x, y, m1);
}

int main() {
  while(1) {
    int n;
    cin >> n;
    if(n == -1) break;
    int size = pow(3,n - 1);
    
    vector<string> matrix(size,string(size,' '));
    f(matrix,0,0,size);
    for(auto line: matrix) {
      for(auto x: line) {
        cout << x;
      }
      cout << endl;
    }
    cout << '-' << endl;
  }
}











// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<string> f(int n) {
//   int s = 1;
//   int x = n;
//   while(x != 2 && x != 1) {
//     s *= 3;
//     x --;
//   }
//   if(n == 1) return {"X"};
//   vector<string> b(s*3,string(s*3,' '));
//   vector<string> v = f(n-1);
//   for(int i = 0; i < v.size(); i++) {
//     copy(v[i].begin(),v[i].end(),b[i].begin());
//     copy(v[i].begin(),v[i].end(),b[i + s].begin() + s);
//     copy(v[i].begin(),v[i].end(),b[i + 2 * s].begin() + 2 * s);
//     copy(v[i].begin(),v[i].end(),b[i].begin() + 2 * s);
//     copy(v[i].begin(),v[i].end(),b[i + 2 * s].begin());
//     // b[0][0] = b[s][s] = b[2 * s][2 * s] = b[0][2 * s] = b[2 * s][0] = 'X';
//     }
//     return b;
// }
// int main() {
//   while(1) {
//     int n;
//     cin >> n;
//     if(n == -1) {
//       break;
//     }
//     for(auto& line: f(n)) {
//       for(auto& x: line) {
//         cout << x;
//       }
//       cout << endl;
//     }
//     cout << '-' << endl;
//   }
// }