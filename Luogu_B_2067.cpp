#include <iostream>
using namespace std;
int main(){
  int m;
  cin >> m;
  int n;
  cin >> n;
  int cnt = 0;
  int q = n;
  while(n--){
    int a;
    cin >> a;
    if(a <= m) {
    m -= a;
    cnt ++;
    }
  }
  cout << (q - cnt) << endl;
} 