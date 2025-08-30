#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int score(char a, char b) {
  int x;
  if( a == 'S') {
    if(b == 'S') x = 1;
    if(b == 'P') x = 2;
    if(b == 'R') x = 0;
  }
  if(a == 'R') {
    if(b == 'S') x = 2;
    if(b == 'P') x = 0;
    if(b == 'R') x = 1;
  }
  if(a == 'P') {
    if(b == 'S') x = 0;
    if(b == 'P') x = 1;
    if(b == 'R') x = 2;
  }
  return x;
}
int scores (string &se,string &fr) {
  int x = 0;
  for(int i = 0; i < se.size(); i ++) {
    x += score(se[i],fr[i]);
  }
  return x;
}
int main() {



  int r,n;
  string se;
  cin >> r >> se >> n; 
  vector<string> fr(n);
  for(auto &x: fr) {
    cin >> x;
  }
  int s1 = 0;
  for(int i = 0; i < n; i ++) {
    s1 += scores(se,fr[i]);
  }
  cout << s1;
  cout << endl;

  int s2 = 0;
  for(int i = 0; i < r; i ++) {
    int P = 0,S = 0,R = 0;
    for(int j = 0; j < n ; j ++) {
      P += score('P',fr[j][i]);
      R += score('R',fr[j][i]);
      S += score('S',fr[j][i]);
    }
    if(P >= S && P >= R) s2 += P;
    else if(R >= S && R >= P) s2 += R;
    else s2 += S;
  }
  cout << s2;

}

