#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
  char str[100];
  fgets(str,100,stdin);
  str[strlen(str) - 1] = '\0';
  char copy[100];
  strcpy(copy,str);
  reverse(str,str + strlen(str));
  !(strcmp(copy,str)) ? cout << "yes" : cout << "no";
}