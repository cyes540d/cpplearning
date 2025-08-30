//这是错的，但是很好地体现了作用域和==

#include <iostream>
using namespace std;
int main(){
  int N;
  cin >> N;
  if(N > 0) {
    cout << "positive";
  }else if(N = 0) {
    cout << "zero";
  }else cout << "negative";  cout << N;

}