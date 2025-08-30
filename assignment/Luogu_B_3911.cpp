#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  unordered_map<string, int> a;
  for(int i = 0; i < n; i ++) {
    string str;
    int x;
    cin >> str >> x;
    a[str] = x;
  }
  string asdf;
  getline(cin, asdf);
  while(k --) {
    string str;
    getline(cin, str);
    int index = str.find('{');
    int index1 = str.find('}');
    while(index != string::npos) {
      str.replace(index, index1 - index + 1, to_string(a[str.substr(index + 1, index1 - index - 1)]));
      index = str.find('{');
      index1 = str.find('}');
    }
    cout << str << endl;
  }
}
// #include <iostream>
// #include <string>
// #include <vector>
// #include <limits>  // 处理输入缓冲区
// using namespace std;
// int main() {
//   int N,k;
//   cin >> N >> k;
//   vector<string> str(N);
//   vector<string> val(N);
//   for(int i = 0; i < N; i ++) {
//     cin >> str[i] >> val[i];
//   }
//   cin.ignore(numeric_limits<streamsize>::max(), '\n');
//   for(int j = 0; j < k; j ++) {
//     // cout << j << " ";
//     string sen;
//     getline(cin,sen);
//     // cout << sen << endl;
//     int len = 0;
//     int i = 0;
//     int cnt = 0;
//     int index0 = sen.find("{") + 1;
//     int index1 = sen.find("}")+ 1;//为了find
//     while(sen.find("}") != string::npos) {
      
//         index0 = sen.find("{") + 1;
//         index1 = sen.find("}")+ 1;//为了find
//       len = index1 - index0 - 1;
//       for(i = 0; i < N; i ++) {
//         if(sen.substr(index0,len) == str[i]) {
//           break;
//         }
//       }
//       sen.replace(index0 - 1,len + 2,val[i]);
//       // cout << len;
//       cnt ++;
//     }
//   cout << sen << endl;
//   }
// }