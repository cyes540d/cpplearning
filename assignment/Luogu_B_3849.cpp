#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
  int N,R;
  cin >> N >> R;
  int w = R;
  vector<char> v;
  int i = 0;
  for(;;i ++){
    if(pow(R,i) > N) break;
  }
  // cout << i << endl;
  for(; i > 0; i --){
    int a = R - 1;
    for(; a >= 0;a --){
      if(N >= a * pow(R,i - 1)) {
        // cout << a << endl;
        break;
      }
    }
    // cout << "减的" << pow(R,i) << " ";
    // cout << R << " " << i;
    N -= a * pow(R,i - 1);
    // cout << "减去后" << N << endl;
    if(a < 10) v.push_back(char(a + 48));
    else v.push_back((char)(a + 55));
    cout << v.back();
  }
  cout << endl;

}