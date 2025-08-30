#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  int sum = 0;
  for(int i = 0;i <= n; i ++){
    if(!(i % 7 == 0 ||i / 10 == 7 || i % 10 ==7)){
      sum += pow(i,2);    
    } 
  }
  cout << sum << endl;
}