#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  priority_queue<int,vector<int>,greater<int>> x;
  long long sum0 = 0;
  long long  q = n;
  while(n --) {
    int num;
    cin >>num;
    // sum0 += num;
    // cout << sum0 << endl;
    x.push(num);
  }
  long long sum = 0;
  for(int i = 0; i < q - 1; i ++) {
    int g = x.top();
    x.pop();
    sum0 = g + x.top();
    sum += sum0;
    // cout << sum << endl;
    x.pop();
    x.push(sum0);
  }
  cout << sum << endl;
}