#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char str[33];
  cin >> str;
  int i = strlen(str) - 1;
    if(str[i] == 'r' && str[i - 1] == 'e') {str[i - 1] = 0;}
    else if(str[i] == 'y' && str[i - 1] == 'l') {str[i - 1] = 0;}
    else if(str[i] == 'g' && str[i - 1] == 'n' && str[i - 2] == 'i') {str[i - 2] = 0;}
  cout << str;
}
//strcmp