#include <iostream>
using namespace std;
int main(){
  int x,y,z;
  cin >> x >> y >> z;
  if (x < 60 && y >= 60 && z >= 60 || y < 60 && z >= 60 && x >= 60 || z < 60 && y >= 60 && x >= 60 ) cout << 1;
    else cout << 0;
}
/*int cnt = 0;
if(a<=60) cnt ++;
if(b<= 60)cnt ++;
if(c<=60)cnt ++;
cout << (cnt==1);
*/