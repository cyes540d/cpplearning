#include <iostream>
#include <stack>
using namespace std;
int main() {
  long long T;
  cin >> T;
  while(T --) {
    stack<unsigned long long> a;
    long long n;
    cin >> n;
    while(n --) {
      string str;
      cin >> str;
      if(str == "push") {
        unsigned long long x;
        scanf("%llu", &x);
        a.push(x);
      } else if (str == "pop") {
        if(!a.empty()) a.pop();
        else cout << "Empty" << endl;
      } else if (str == "query") {
        if(!a.empty()) cout << a.top() << endl;
        else cout << "Anguei!" << endl;
      } else {
        cout << a.size() << endl;
      }
    }
  }
}