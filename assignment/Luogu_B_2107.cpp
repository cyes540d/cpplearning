#include <iostream>
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  int arr[n][m];
  for(auto& line: arr){
    for(auto& x: line){
      cin >> x;
    }
  }
  int b[m][n];
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < m; j ++){
      b[j][n - 1 - i] = arr[i][j];
    }
  }
  for(auto& line: b){
    for(auto& x: line){
      cout << x << " ";
    }
    cout << endl;
  }
}