#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main(){
  char str[256];
  fgets(str,300,stdin);
  int cnt = 0;
  for(int i = 0; str[i] != '\0'; i ++){
    if(isdigit(str[i])) cnt ++;
  }
  cout << cnt << endl;
}