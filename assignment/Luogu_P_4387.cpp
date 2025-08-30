#include <iostream>
#include <stack>
#include <vector>
#include <algorithm> 
using namespace std;
int main() {
  int q;
  cin >> q;
  while(q --) {
    int n;
    cin >> n;
    stack<int> stk0;
    vector<int> v(n);
    for(int i = 0; i < n; i ++) {
      int x;
      cin >> x;
      v[i] = x;
    }
    int i = 0;
    while (n --) {
      int x;
      cin >> x;
      bool found = false;

      if(!stk0.empty()&&x == stk0.top()) {found = true;stk0.pop();}
      else{for(; i < v.size(); i ++) {
          if(x != v[i]) stk0.emplace(v[i]);
          else {
            i ++;
            found = true;
            break;
          }
        }
      } 
      if(!found) {stk0.emplace(-1);}
      // if(i == v.size() && !stk0.empty() && x != stk0.top()) {i += 1;break;}
    }
    if(stk0.empty()) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}