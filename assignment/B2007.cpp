#include <iostream>
#include <format>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  cout << format("{}",a+b);
}