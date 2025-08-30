#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  for(int i = 0; i < n; i ++) {
    x[i] = i + 1;
  }
  do {
    // cout << right;
    for(auto& a : x) {
      cout.width(5);
      cout << a;
    }
    cout << endl;
  } while (next_permutation(x.begin(), x.end()));
}

