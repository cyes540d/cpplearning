#include <iostream>
#include <vector>
using namespace std;
int main() {
  int m, n, sx, sy;
  cin >> m >> n >> sx >> sy;
  vector<pair<int, int>> v(m * n);
  for(auto&[x,y]: v) {
    cin >> x >> y;
    // cout << x << y;
  }
  cout << sx << " " << sy << endl;
  while(!(v[(sx - 1) * m + sy - 1].first == 0 &&  v[(sx - 1) * m + sy - 1].second == 0)) {
    // sx = v[(sx - 1) * m + sy - 1].first ;
    // sy = v[(sx - 1) * m + sy - 1].second;
    tie(sx, sy) = v[(sx - 1) * m + sy - 1];
    cout << sx << " " << sy << endl;
  }
}