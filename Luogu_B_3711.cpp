//pow超精度了
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
  int a;
  cin >> a ;
  vector<long long> v(a);
  for (auto& x: v) {
    cin >> x;
  } 
  vector<int> num;
  for(int i = 0; i < v.size(); i++){
    long long x = v.at(i);
    while(x != 0){
      num.push_back(x % 10 );
      x /= 10;
    }
    // for(auto x: num) cout << x << endl;没问题
    bool find = false;
    reverse(num.begin(),num.begin() + num.size());
    // for(auto x: num) cout << x << endl;没问题 
    for(int l = 0; l < num.size(); l ++) {

      for(int r = l; r < num.size() + 1 && r - l < num.size(); r ++) {
        long long number = 0;
        vector<int> nei(num);
        nei.erase(nei.end() -  r, nei.end() - l);
        // for(auto x: nei) cout << x << endl;
        // cout << endl;
        int cnt = 1;
        for(auto x: nei) {
//简单方法：x = x * 10 + d；
          // cout << x << endl;
          int w = 1;
          for(int q = 0; q < nei.size() - cnt; q ++) {
            w *= 10;
          }
          number += x * w;
          cnt ++;
        }
        // cout << number << endl;
        if(number % 4 == 0) {
          find = true;
          break;
        }
      }
//简单方法：在for里面加条件！find，不用break
      if(find) break;
    }
    if(find) {
      num.clear();  
      cout << "Yes" << endl;
      continue;  
    }else {
      num.clear();  
      cout << "No" << endl;
      continue; 
    }
  }
}