#include <algorithm>
#include <iostream>
using namespace std;
using array = int[8];
int main() {
  int N;
  cin >> N;
  struct Student {
    int score;
    string name;
  }stu[N];
  for(auto&[score,name]:stu) {
    cin >> score >> name;
  }
  sort(stu,stu + N,[](auto& a,auto& b){
    return a.score > b.score;
  });
  cout << stu[0].name;
}
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//   int N;
//   cin >> N;
//   vector<pair<int,string>> stus(N);
//   for(auto&[score,name]:stus) {
//     cin >> score >> name;
//   }
//   sort(stus.begin(),stus.end(),[](pair<int,string>& a,pair<int,string>& b)->bool {
//     return a.first > b.first;
//   });
//   cout << stus[0].second;
// }