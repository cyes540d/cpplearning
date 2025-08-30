// #include <iostream>
// using namespace std;
// int main(){
//   int a,b,c;
//   cin >> a >> b >> c;
//   cout.width(8);
//   cout << right;
//   cout << a << " ";
//   cout.width(8);
//   cout << b << " ";
//   cout.width(8);
//   cout << c << " ";
// }


// #include <iostream>
// #include <format>
// using namespace std;
// int main(){
//   int a,b,c;
//   cin >> a >> b >> c;
//   cout << format("{0:>8d} {2:>8d} {1:>8d}",a,c,b);
// }
#include <stdio.h>
int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  printf("%8d %8d %8d",a,b,c);
}