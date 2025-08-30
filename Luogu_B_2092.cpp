#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int N;
  cin >> N;
  int arr[N];
  fill(arr,arr + N,1);
  for(int i = 0;i < N;i ++){
    for(int j = 1;j <= i + 1;j++){
      if ((i + 1) % j == 0){
        arr[i] = -arr[i];
        // cout << i << arr[i] << endl;
      }
      // cout << j;
    }
    // cout << i;
  }
  for (int x = 0;x < N;x++){
    if(arr[x] == -1) cout << x + 1 << " ";
  }
}