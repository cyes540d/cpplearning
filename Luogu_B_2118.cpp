#include <iostream>
#include <string.h>
using namespace std;
int main(){
  char sl[30], sb[30];
  // cin.getline(sl,30);
  // cin.getline(sb,30);
  cin >> sl >> sb;
  if(strstr(sb,sl)) {
    cout << sl << " is substring of " << sb;
  }else if(strstr(sl,sb)) {
    cout << sb << " is substring of " << sl;
  }
  else cout << "No substring";
}