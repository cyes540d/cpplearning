#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int x = 0;
  while(n --) {
    int q;
    scanf("%d",&q);
    x ^= q;
  }
  cout << x << endl;
}