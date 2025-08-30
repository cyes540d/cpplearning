#include <iostream>
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  int arr[n][m];
  for(auto& x: arr) {
    for(auto& a: x)
    cin >> a;
  }
  for(int i = 0; i < m; i ++){
    for(int j = 0; j < n; j ++){
      cout << arr[j][i] << " ";
    }
    puts("");
  }
}