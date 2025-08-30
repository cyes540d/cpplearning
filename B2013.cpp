#include <iostream>
using namespace std;
#include <format>
int main(){
  double f;
  cin >> f;

  cout << format("{:.5f}", 5*(f-32)/9) <<endl;
}