#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double ave(vector<int> &a) {
  double sum = 0;
  for(auto& x: a) {
    sum += x;
  }
  return sum / a.size();
}
double s(vector<int> &a,double ave) {
  double sum = 0;
  for(auto& x: a) {
    sum += (ave - x) * (ave - x);
  }
  return sum;
}
int main() {
  int n, m;//n是人数，m是次数N
  cin >> n >> m;
  vector<pair<double, string>> a(n);
  for(int i = 0; i < n; i ++) {
    auto&[score,name] = a[i];
    cin >> name;
    // cout << name;right
    vector<int> b(m);
    for(int j = 0; j < m; j ++) {
      cin >> b[j];
      // cout << a[j] << endl;正确输入
    }
    // cout << ave(a);
    score = s(b,ave(b));
    // cout << score << " ";
  }
  sort(a.begin(), a.end(),[](auto& a, auto& b) -> bool {
    auto&[f1,f2] = a;
    auto&[g1,g2] = b;
    if(f1 != g1) return f1 > g1;
    return f2  < g2;
  });
  int x = min(n, 20);
  for(int i = 0; i < x; i ++) {
    cout << a[i].second << endl;
  }
}