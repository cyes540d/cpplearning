#include <iostream>
using namespace std;
int main(){
  long long m,k;
  cin >> m >> k;
  int cnt = 0;
  for(;m > 0;){
    if(m % 10 == 3) {
      cnt ++;
    }
    m /=10;
  }
  cout << (cnt == k ? "YES" : "NO") << endl;
}