#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while(t --) {
    int n, m;
    cin >> n >> m;
    cout << ((m%2==1&&n!=0||m%2==0&&n==0)?"Yes":"No") << endl;
  }
}