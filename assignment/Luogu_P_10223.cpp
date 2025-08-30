#include <iostream>
#include <vector>
#include <algorithm>
#include <format>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> cheif(n);
  for(int i = 0; i < n; i ++) {
    // cin >> cheif[i].second;
    // cheif[i].second = -cheif[i].second + n + 1; 
    cheif[i].first = i;
  }

  int q = n;
  while(q --) {
    // cin >> cheif[i].second;
    // cheif[i].second = -cheif[i].second + n + 1; 
    int id;
    cin >> id;
    cheif[id - 1].second = q + 1;
  }


  vector<pair<int, int>> mem(n);
  for(int i = 0; i < n; i ++) {
    cin >> mem[i].second;
    mem[i].first = i;//firstid
  }
  sort(mem.begin(), mem.end(),[](auto&a,auto&b) {
    return a.second < b.second;
  });
  for(int i = 0; i < n; i ++) {
    mem[i].second = i + 1;
  }
  sort(mem.begin(), mem.end());
  vector<tuple<int, int, int, int>> x(n);//id,sum,cheif,mem
  for(int i = 0; i < n; i ++) {
    auto&[sum,mem0,cheif0,id] = x[i];
    cheif0 = cheif[i].second;
    mem0 = mem[i].second;
    sum = mem0 + cheif0;
    id = i + 1;    
  }
  sort(x.begin(),x.end(),greater<tuple<int, int, int, int>>());
  cout.fill('0');
  cout << right;
  for(int i = 0; i < n; i ++) {
    // cout << i + 1 << '.' << "Kod" << get<3>(x[i]) << ' ' << '(' << get<0>(x[i]) << ')' << endl;
    cout << format("{}. Kod{:02d} ({})",i + 1,get<3>(x[i]),get<0>(x[i])) << endl;
  }
}