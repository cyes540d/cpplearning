#include <iostream>
using namespace std;

int main(){
  double x,a,y,b;
  cin >> x >> a >> y >> b;
  cout << fixed;
  cout.precision(2);
  cout <<  (a * x - b * y) / (a - b);
}
/*为什么int四个再强转不行？
因为会丢精度
#include <iostream>
    using namespace std;
    int main(){
        int x,a,y,b;
        cin >> x >> a >> y >> b;
        cout << fixed;
        cout.precision(2);
        // 先将整数转换为double再计算，避免整数除法的截断问题
        cout << (double(a*x) - double(b*y)) / (double(a) - double(b));
        return 0;
    }
    */
