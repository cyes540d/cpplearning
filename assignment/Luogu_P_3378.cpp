#include <iostream>
#include <queue>
using namespace std;
int main() {
  int n;
  cin >> n;
  priority_queue<int,vector<int>, greater<int>> q;
  while(n --) {
    int op;
    cin >> op;
    switch(op) {
      case 1:
        int x;
        cin >> x;
        q.push(x);
        break;
      case 2:
        cout << q.top() << endl;
        break;
      case 3:
        q.pop();
        break;
    }
  }
}