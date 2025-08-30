#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main () {
  int N;
  cin >> N;
  deque<int> a;
  auto iter = a.begin();
  while(N --) {
    int num;
    scanf("%d", &num);
    switch(num) {
      case 0:
        int x;
        scanf("%d", &x);
        a.push_back(x);
        if(x > *iter || a.size() == 1) {
          iter = a.end() - 1;
        }
        break;
      case 1:
        if(iter == a.end() - 1) {
          iter = max_element(a.begin(), a.end() - 1);
        }
        a.pop_back();
        break;
      default:

        if(!a.empty())
          // cout << *iter << endl;
          printf("%d\n",*iter); 
        else printf("0\n");
        break;
    }
  }
}