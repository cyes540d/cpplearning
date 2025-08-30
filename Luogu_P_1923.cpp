#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for(auto&x: v) {
    // cin >> x;
    scanf("%d", &x);
  }
  nth_element(v.begin(), v.begin() + k, v.end());
  cout << *(v.begin() + k) << endl;
}