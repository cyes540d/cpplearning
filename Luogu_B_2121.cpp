#include <iostream>
#include <string.h>
using namespace std;
int main(){
  char str[30000];
  cin.getline(str,30000);
  char delimiter[] = ",. ";
  char* token = strtok(str,delimiter);
  char maxa[200];
  char mina[200];
  strcpy(maxa,token);
  strcpy(mina,token);
  // cout << token;
  while(token) {
    token = strtok(NULL,delimiter);
    // cout << token;
    if(token) {
      if(strlen(token) > strlen(maxa)) {
        strcpy(maxa,token);
      }
      if(strlen(token) < strlen(mina)) {
        strcpy(mina,token);
      }
    }  
  }
  cout << maxa << endl << mina;
}