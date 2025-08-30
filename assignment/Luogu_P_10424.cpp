#include <iostream>
using namespace std;
int oe(int cnt, int x) {
  if(cnt % 2 != 0 && x % 2 != 0 ||cnt % 2 == 0 && x % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}
int main() {
  int N;
  cin >> N;
  int cntm = 0;
  for(int i = 1; i < N; i ++) {
    int cnt = 0;
    int m = i;
    bool judge = true;
    while (m != 0) {
      cnt ++;
      if(!oe(cnt,m % 10)) {
        judge = false;
      }
      m /= 10;
    }
    if(judge) cntm ++;
  }
  cout << cntm << endl;
}