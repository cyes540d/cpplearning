//wotaiqiangle
//resize
//随便插入一个内容，就不用下标 - 1
//用数组记录是否访问
#include <iostream>
#include <vector>
using namespace std;
int main(){
  int N;
  // auto web = vector(N,vector(100,0));
  cin >> N;
  vector<vector<int>> web(N,vector<int>(100)); 
  vector<int> ans;
  ans.push_back(1);
  for(auto& line: web) {
    int n;
    cin >> n;
    int cnt = 0;
    for(auto& x: line) {
      cin >> x;
      cnt ++;
      if(cnt == n) break;
    }
  }
  for(auto& line: web) { 
    int cnt = 0;
    for(auto& x: line) {
      if(x == 0) {
        line.erase(line.begin() + cnt,line.end());
        break;
      }
        cnt ++;
    }
  }
  bool eq = true;
  // for(auto& line: web) {
  //   for(auto& x: line) {
  //     cout << x << " ";
  //   }
  //   cout << endl;
  // }
  //第一个网站第i个链接
  for(int i = 0; i < web[0].size(); i ++) {
    eq = true;
    int q = web[0][i];
    //第一步开始
    for(auto& x: ans) {
      if(x == q) {
        eq = false;        
      }  
    }
    if(eq) ans.push_back(q);
    for(int j = 0; j < web[q-1].size(); j ++) {
      eq = true;
      int w = web[q-1][j];
      //第二步开始
      for(auto& x: ans) {
        if(x == w) {
          eq = false;        
        }  
      }
      if(eq) ans.push_back(w);
      
    }
  }
  cout << ans.size();
  // for(auto& x: ans){
  //   cout << x;
  // }
}