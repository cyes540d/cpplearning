#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int n,q;
  cin >> n >> q;
  vector<string> que(n);
  int x[n];  
  for(int i = 0; i < n; i ++) {
    cin >> que[i];
    int one = stoi(que[i]);
    // cout << one ;
    int one2 = one;
    int cnt1 = 0;
    if(one < 0) {
      cnt1 ++;
      one2 = -one2;
    }
    while(one2 != 0) {
      one2 /= 10;
      cnt1 ++;
    }
    int two = stoi(que[i].substr(cnt1 + 1));
    // cout << two << " ";
    int cnt2 = 1;
    int two2 = two;
    if(two2 < 0) {
      two2 = -two2;
    }
    while(two2 != 0) {
      two2 /= 10;
      cnt2 ++;
    }
    // cout << cnt2 << "     ";
    int three = stoi(que[i].substr(cnt1 + 1 + cnt2 + 1));
    // cout << three << " ";
    x[i] = (three - two) / one;
    // if(i == 2) {
    //   cout << three << " " << two << " " << one << endl;
    // }
    // cout << x[i];
  }
  vector<int> ans(n,-1);
  for(int i = 0; i < n; i ++) {
    bool judge = true;
    for(auto& w: ans) {
      if(x[i] == w) {
        judge = false;
      }
    }
    if(judge) {
      ans[i] = x[i];
      // cout << ans[i];
    }
  }

  for(int i = 0; i < q; i ++) {
    int l,h;
    cin >> l >> h;
    int cnt = 0;
    for(int j = 0; j < n; j ++) {
      if(l <= ans[j] && ans[j] <= h) {
        // if(j == 0 || ans != x[j]) {
        //   ans = x[j];
        //   cnt ++;
        // }
        cnt ++;
      }
    }
    cout << cnt << endl;
  }
}