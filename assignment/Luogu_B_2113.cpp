#include <iostream>
#include <cstring>
using namespace std;
int main(){
  char str[101];
  cin.getline(str,101);
  int len = strlen(str);
  for(int i = 0; i < len; i ++) {
    cout << char(str[i] + str [(i + 1) % len]);
  }
   