#include <iostream>
using namespace std;
int main(){
  int m,n;
  cin >> m >> n;
  int arr[m][n] = {};
  int sum = 0;
  for (int i = 0;i < m;i ++){
    for(int j = 0;j < n;j ++){
      cin >> arr[i][j];
      if(i == 0 || j == 0 || i == m - 1 || j == n - 1) sum += arr[i][j];
    }
  }
  // sum -= arr[0][0] + arr[0][n - 1] + arr[m - 1][0] + arr[m - 1][n - 1];
  cout << sum << endl;

}    