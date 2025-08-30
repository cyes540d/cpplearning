#include <iostream>
#include <string.h>
using namespace std;
int main(){
  char str[10001];
  cin.getline(str,10000);// >> str;
  for(int i = 0; i < strlen(str); i ++) {
    // if(isalpha(str[i]) && str[i] != 'a' && str[i] != 'A')cout << char(str[i] - 1);
    // else if(str[i] == 'a') cout << 'z';//cout << str[i];
    // else if(str[i] == 'A') cout << 'Z';
    // else cout << str[i];
    if(isupper(str[i])) cout << char((str[i] + 26 - 1 - 'A') % 26 + 'A');
    else if(islower(str[i])) cout << char((str[i] + 26 - 1 - 'a') % 26 + 'a');
    else cout << str[i];
  }
}