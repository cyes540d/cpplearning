#include <iostream>
using namespace std;
int main(){
  int n,m,k;
  cin >> n >> m >> k;
  int arr0[n][m],arr1[m][k];
  for(auto& line: arr0) {
    for(int& x: line) {
      cin >> x;
    }
  } 
  for(auto& line: arr1) {
    for(int& x: line) {
      cin >> x;
    }
  }
  int arr[n][k] = {};
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < k; j ++){
      for(int q = 0; q < m; q ++){
        arr[i][j] += arr0[i][q] * arr1[q][j];
      }      
      cout << arr[i][j] << " ";
    }
    puts("");
  }
}