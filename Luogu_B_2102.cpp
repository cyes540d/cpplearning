#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
  int arr[5][5];
  for(auto& line: arr){
    for (auto& x: line){
      cin >> x;
    }
  }
  bool cnt = false;
  int maxa[5] = {};
  int mina[5] = {};
  fill(mina, mina + 5, 100000);
  fill(maxa, maxa + 5, -10000);
  // int maxa[5] = {};
  // int mina[5];
  // memset(mina, 100, sizeof(int) * 5);
  for(int i = 0; i < 5; i ++){
    for(int j = 0; j < 5;j ++){
      maxa[i] = max(maxa[i],arr[i][j]);
      mina[i] = min(mina[i],arr[j][i]);
    }
  }
  for(int i = 0; i < 5; i ++){
    for(int j = 0; j < 5; j ++){
      if(maxa[i] == mina[j]) {
        int k = 0;
        for(; k < 5; k ++){
          if(maxa[i] == arr[i][k]) {
            break;
          }  
        }
        if(k == j){
          cout  << i + 1 << " " << j + 1 << " " << maxa[i] << endl;
          cnt = true;
        }
      }
    }
  }
  if (!(cnt)) puts("not found");
}