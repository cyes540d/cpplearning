#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  for(auto& x: v){
    cin >> x;
  }
  // vector<int> vi(v);
  // int j = n - 1;
  // do {
  //   int i = j;
  //   for(int q = n - 1; q < n - 1 + v.size(); q ++){
  //     vi.at((q + 1) % n) = v.at(i % n);
  //     i ++;     
  //     cout << vi.at((q + 1) % n) << " ";
  //   }
  //   cout << endl;
  //   j --;
  // }while(vi[n - 1] != n);
  do {
    int back = v.back();
    v.pop_back();
    v.insert(v.begin(),back);
    for(auto& x: v) cout << x << " ";
    cout << endl;
  } while(v.back() != n);
}