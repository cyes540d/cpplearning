#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main () {
  int t;
  cin >> t;
  while(t --) {
    int n;
    cin >> n;
    unordered_set<int> v;
    while(n --) {
      int x;
      scanf("%d",&x);
      if(v.find(x) == v.end()) {
        v.emplace(x);
        cout << x << " ";
      }
    }
    cout << endl;
  }
}