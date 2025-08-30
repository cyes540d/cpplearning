#include <iostream>
using namespace std;
int main(){
  int x,y;
  cin >> x >> y;
  int a = 0;
  int xy = 1;
  for(int cnt = 0;cnt < y;cnt ++) {
    xy = xy * x % 7;
  }
  a += xy;
  switch(;a) {
    case 1:
      puts("Monday");
      break;
    case 2:
      puts("Tuesday");
      break;
    case 0:
      puts("Sunday");
      break;
    case 3:
      puts("Wednesday");
      break;
    case 4:
      puts("Thursday");
      break;
    case 5:
      puts("Friday");
      break;
    case 6:
      puts("Saturday");
      break;
    default:
      puts("error");
  }
}