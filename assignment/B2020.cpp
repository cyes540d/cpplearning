// #include <iostream>
// #include <format>
// using namespace std;
// int main(){
//   int a,b,c,d,e;
//   cin >> a >> b >> c >> d >> e;
  
//   int sum = 0;
//   int x = a / 3;
//   sum += a % 3;
//   b += x;
//   e += x;
//   a = x;

//   x = b / 3;
//   sum += b % 3;
//   a += x;
//   b = x;
//   c += x;

//   x = c / 3;
//   sum += c % 3;
//   b += x;
//   d += x;
//   c = x;

//   x = d / 3;
//   sum += d % 3;
//   c += x;
//   d = x;
//   e += x;

//   x = e / 3;
//   sum += e % 3;
//   e = x;
//   a += x;
//   d += x;
// /*a += x;
//   d += x;
// 和d = a += x;
// 有区别
// */
//   cout << format("{} {} {} {} {}\n",a,b,c,d,e) << sum;
// }
#include <iostream>
using namespace std;
int main(){
  int intArray[5];
  for(auto & x:intArray){
    cin >> x;
  }
  int sum = 0;
  for(int i = 0;i < 5;i++){
    sum += intArray[i] % 3;
    int div3 = intArray[i] / 3;
    intArray[i] /= 3;
    // switch(;i){
    //   case 0:
    //     intArray[i + 1] += div3;
    //     intArray[4] += div3;      
    //     break;
    //   case 4:
    //     intArray[0] += div3;
    //     intArray[i - 1] += div3;        
    //     break;
    //   default:
    //     intArray[i + 1] += div3;
    //     intArray[i - 1] += div3;
    // }
    intArray[(i + 1) % 5] += div3;
    intArray[(i + 4) % 5] += div3;
  }
  for(auto x:intArray){
    cout << x << " ";
  }
  cout << endl << sum;
}
