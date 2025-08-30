// #include <stdio.h>
// int main(){
//   char c ; 
//   scanf("%c",&c);
//   printf("  %c\n"
//     " %c%c%c\n"
//     "%c%c%c%c%c",c,c,c,c,c,c,c,c,c,c);
// }
#include <iostream>
#include <format>
using namespace std;
int main(){
  char a;
  cin >> a;
  // cout << "  " << a<<endl
  //      << " "  << a<<a<<a<<endl
  //      << a<<a<<a<<a<<a<<endl;
  cout << format("  {0}\n {0}{0}{0}\n{0}{0}{0}{0}{0}",a);
}