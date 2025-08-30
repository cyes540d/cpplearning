#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int x = n - 1;x >=0;x --){
    cin >> arr[x];
    
  }
  for(int x:arr) {
    cout << x << " ";   
  }
}