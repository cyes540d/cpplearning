#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using VE = vector<tuple<string, char, long long>>;
int main () {
  int s,h;
  cin >> s >> h;
  vector<tuple<string, char, long long>> pl(s + h);
  for(auto& [name, attribute, proficient]: pl) {
    cin >> name >> attribute >> proficient;
  }
  sort(pl.begin(), pl.end(), [=,cnt = 0] (auto& a, auto& b)mutable -> bool {
    auto&[f1,f2,f3] = a;
    auto&[g1,g2,g3] = b;
    if(f2 != g2) {
      if(f2 == 'H')return 1;
      else return 0;
    }
    else return f3 > g3; 
  });

  for(int cnt = 0,q = 0;auto& [name, attribute, proficient]: pl) {

    if(cnt == 2) {
      cout << name <<endl;
    }
    if(cnt >= h + 5) {
      cout << name << endl;
      q ++;
    }
    if(q == 4) break;
    cnt ++;
  }

}