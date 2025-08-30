#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  int cnt = 1;
  int i = 3;
  for(;cnt < n;i ++){
    bool id = true;
    for(int j = 2;j <= ceil(sqrt(i));j ++){
      if(i % j == 0) {
        id = false;
        break;
      } 
    }
    if(id) cnt++;
  }
  cout << i - 1 << endl;
}