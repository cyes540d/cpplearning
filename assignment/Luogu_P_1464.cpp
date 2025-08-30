#include <iostream>
#include <vector>
#include <format>
using namespace std;
auto saved = vector(21,vector(21,vector(21,-1)));
long long w(long long a, long long b, long long c) {

    if(a <= 0 || b <= 0 || c <= 0) {
      return 1;
    }else if(a > 20 || b > 20 || c > 20) {
      return  w(20,20,20);;
    }else {
      if(saved[a][b][c] == -1){
        if(a < b && b < c) {
        saved[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        }else {
        saved[a][b][c] =  w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);      
        }
      }
    }
  return saved[a][b][c];
}
int main() {
  vector<long long> v(3);
  while(1) {
    for(auto& x: v) cin >> x;
    if((v[0] == -1 && v[1] == -1 && v[2] == -1)) break;
    cout << format("w({}, {}, {}) = {}",v[0], v[1], v[2], w(v[0], v[1], v[2]));
    cout << endl;
  }
  cout << endl;
}