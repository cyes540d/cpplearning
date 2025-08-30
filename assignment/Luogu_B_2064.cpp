#include <iostream>
using namespace std;
int main(){
  double arr[30] = {1,1};
  for (int x = 2;x < 30;x ++){
    arr[x] = arr[x - 1] + arr[x - 2]; 
  }
  int n;
  cin >> n;
  int a[n];
  for(auto& x:a){
    cin >> x;
    cout << arr[x - 1] << endl;
  }
}