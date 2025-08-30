
#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n,T;
  cin >> n >> T;
  vector<int> id(n);
  for(int& x: id) {
    cin >> x;
  }
  int t[T];//指令
  for(int& x: t){
    cin >> x;
  }
  // cout << id.size() << endl;
  // i：处理第i个指令
  for(int i = 0; i < T; i++) {
    // j: 第i个指令的第j步
    for(int j = 1; j <= t[i] ; j ++){
      // q: 第j步的第q项，s是“顺序”
      for(int q = 0; n > q * t[i] + j - 1; q ++) {
        // v[s] = id[q * k];
        int l = id[q * t[i] + j - 1];
        id.push_back(l);
        // cout << l << " ";
        // cout << id.size() << " ";
      }
    }
    // cout << id.size() << " ";
    id.erase(id.begin(),id.begin() + n);
    // cout << id.size() << endl;
  }
  for(auto& x: id) {
    cout << x << " ";
  }
}
