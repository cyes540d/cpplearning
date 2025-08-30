// #include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;
int main () {
  int n;
  cin >> n;
  queue<int> a;
  while(n --) {
    int x;
    cin >> x;
    switch(x) {
      case 1:
        int ele;
        cin >> ele;
        a.push(ele);
        break;
      case 2:
        if(!a.empty()) a.pop();
        else cout << "ERR_CANNOT_POP" << endl;
        break;
      case 3:
        if(!a.empty())cout << a.front() << endl;
        else cout << "ERR_CANNOT_QUERY" << endl;
        break;
      case 4:
        cout << a.size() << endl;
    }
  }
}