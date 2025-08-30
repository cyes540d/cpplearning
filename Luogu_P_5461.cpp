#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void pardon(auto& matrix, int x, int y, int size) {
  if(size == 1) { 
    return;
  }
  // if(size == 1) return;
  int m = size / 2;
  for(int i = x; i < x + m; i ++) {
    for(int j = y; j < y + m; j ++) {
      matrix[i][j] = 0;
    }
  }
  pardon(matrix, x + m, y, m);
  pardon(matrix, x + m, y + m, m);
  pardon(matrix, x, y + m, m);
}



int main() {
  int n;
  cin >> n;
  int s = pow(2,n);
  auto matrix = vector(s,vector(s,1));
  pardon(matrix, 0, 0, s);
  for(auto line: matrix) {
    for(auto x: line) {
      cout << x << " ";
    }
    cout << endl;
  }
}



// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <algorithm>
// using namespace std;
// void f(vector<vector<long long>>& v) {
//   int s = v.size();
//   if(s == 2) {
//     v[0][0] = 0;
//     return;
//   }
//   if(s == 1) return;
//   for(long long i = 0; i < s / 2; i ++) {
//     for(long long j = 0; j < s / 2; j ++) {
//       v[i][j] = 0;
//     }
//   }




//   vector<vector<long long>> v1;
//   for (int i = s / 2; i < s; ++i) {
//         vector<long long> row(v[i].begin() + s / 2, v[i].end());
//         v1.push_back(row);
//   }



  
//   f(v1);
//   for(long long i = 0; i < v1.size(); i ++) {
//     copy(v1[i].begin(), v1[i].end(), v[i + s / 2].begin());
//     copy(v1[i].begin(), v1[i].end(), v[i + s / 2].begin() + s / 2);
//     copy(v1[i].begin(), v1[i].end(), v[i].begin() + s / 2);
//   }
// }
// int main() {
//   int n;
//   cin >> n;
//   long long s = pow(2,n);
//   vector<vector<long long>> v(s,vector<long long>(s,1));
//   f(v);
//   for(auto&line: v) {
//     for(auto& x: line) {
//       cout << x << " ";
//     }
//     cout << endl;
//   }
// }