// toupper
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
  char str[50];
  cin >> str;
  reverse(str,str + strlen(str));
  // cout <<  str;
  for(int i = 0; i < strlen(str); i ++) {
    if(isupper(str[i])) {
      str[i] = str[i] + 'a' - 'A';
      str[i] = (str[i] + 3 + 26 - 'a') % 26 + 'a';
      }
      else {
        str[i] = str[i] + 'A' - 'a';
        
        str[i] = (str[i] + 3 + 26 - 'A') % 26 + 'A';
      }
      cout << str[i];
  }

}