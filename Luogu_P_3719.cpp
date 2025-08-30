//up第三种做法
#include <iostream>
using namespace std;
int f(string s,int& i) {
  int cnt = 0;
  for(; i < s.length(); ++i) {
    if(s[i] == 'a') cnt ++;
    else if(s[i] == '(') cnt += f(s,++i);
    // if(s[i] == '|') return max(cnt,f(s,++i));
    else if(s[i] == ')') return cnt;
    else if(s[i] == '|') return max(cnt,f(s,++i));
  }
  return cnt;
}
int main() {
  string s;
  cin >> s;
  int i = 0;
  cout << f(s,i);
}
// //up第二种做法
// #include <iostream>
// #include <cmath>
// using namespace std;
// int f(string s, int l, int r) {
//   int m = 0, n = 0;
//   for(int cnt = 0, i = l; i <= r; i ++) {
//     if(s[i] == '(') {
//       if(cnt == 0) m = i;
//       cnt ++;
//     }
//     if(s[i] == ')') {
//       cnt --;
//       if(cnt == 0) {
//         n = i;
//         // return f(s,l,m - 1) + f(s,m + 1, n - 1) + f(s,n + 1,r);
//       }
//     }
//     if(cnt == 0 && s[i] == '|') {
//       return max(f(s,l,i - 1), f(s,i + 1,r));
//     }            
//   }
//   if(m == 0 && n == 0) return r - l + 1;
//   else return f(s,l,m - 1) + f(s,m + 1, n - 1) + f(s,n + 1,r);
// }
// int main() {
//   string s;
//   cin >> s;
//   cout << f(s,0,s.size() - 1) << endl;
// }
// //up第一种做法
// #include <iostream>
// #include <cmath>
// using namespace std;
// int f(string s) {
//   if(s.find('|') == string::npos && s.find('(') == string::npos) return s.size();
//   int m = 0, n = 0;
//   for(int cnt = 0, i = 0; i < s.size(); i ++) {
//     if(s[i] == '(') {
//       if(cnt == 0) m = i;
//       cnt ++;
//     }
//     if(s[i] == ')') {
//       cnt --;
//       if(cnt == 0) {
//         n = i;
//       }
//     }
//     if(cnt == 0 && s[i] == '|') {
//       return max(f(s.substr(0,i)), f(s.substr(i + 1)));
//     }            
//   }
//   return f(s.substr(0,m)) + f(s.substr(m + 1, n - m - 1)) + f(s.substr(n + 1));
// }
// int main() {
//   string s;
//   cin >> s;
//   cout << f(s) << endl;
// }




// //自己写的改进后的，虽然还是很抽象，但是懒得改了
// #include <iostream>
// #include <vector>
// using namespace std;
// string f(string s) {
//   label:
//   int x = s.find('|');
//   if(s.find('(') == string::npos && s.find('|') != string::npos) {
//     if(f(s.substr(0, x)).size() > f(s.substr(x + 1)).size()) {
//       s = f(s.substr(0,x));
//     }else {
//       s = f(s.substr(x + 1));
//     }
//   }
//   int i = s.find('(');
//   if(i == string::npos) {
//     return s;
//   }else {
//     while(s.find('(', i + 1) != string::npos){
//       i = s.find('(', i + 1);
//     }
//   int j = s.find(')', i);
//   s.replace(i,j - i + 1,f(s.substr(i + 1,j - i - 1)));
//   }
//   if(s.find('(') != string::npos) goto label;

//   x = s.find('|');
//   if(s.find('(') == string::npos && s.find('|') != string::npos) {
//     if(f(s.substr(0, x)).size() > f(s.substr(x + 1)).size()) {
//       s = f(s.substr(0,x));
//     }else {
//       s = f(s.substr(x + 1));
//     }
//   }
//   return s;
// }
// int main() {
//   string s;
//   cin >> s;
//   // s.insert(0,1,'(');
//   // s.push_back(')');
//   cout << f(s).size() << endl;
// }



//自己写的很大一坨的
/*
#include <iostream>
#include <vector>
using namespace std;

void f(string &s) {
  // int index = 0;
  // int i = 0;
  // if(s.find('(') == string::npos) return;
  // while(1) {
  //   i = index;
  //   index = s.find('(', index + 1);
  //   if(index == string::npos) {break;}
  // }
  int i = s.find('(');
  if(i == string::npos) return;
  else {
    while(s.find('(', i + 1) != string::npos){
      i = s.find('(', i + 1);
    }
  }
  int j = s.find(')', i);
  string sub = s.substr(i, j - i + 1);//含（）

  if(sub.find('|') == string::npos) {
    s.erase(j,1);
    s.erase(i,1);
    // s.clear();
    f(s);
    return;
  }
  vector<int> cntIndex;//无括号坐标
  int m = sub.find('|');

  while(1) {
    if(m != string::npos) {
      // cout << m;
      cntIndex.push_back(m - 1);
      m = sub.find('|', m + 1);
    }
    else break;
  }

  vector<int> jihe(cntIndex.size() + 1);
  for(int k = 0; k < jihe.size(); k ++) {
    if(k != 0 && k != cntIndex.size()) {
      jihe[k] = cntIndex[k] - cntIndex[k - 1] - 1;
    }
    else if(k == cntIndex.size()) {
      jihe[k] = sub.substr(cntIndex[k - 1] + 1).size() - 2;
    }else {
      jihe[k] = cntIndex[0];
    }
  }
  // for(auto x: jihe) cout << x << endl;
  // cout << cntIndex[0];
  int maxa = 0;
  for(int l = 0; l < jihe.size(); l ++) {
    if(jihe[l] > maxa) maxa = jihe[l];
  }
  // cout << maxa;
  s.replace(i,j - i + 1,maxa,'a');
  f(s);

}
int main() {
  string s;
  cin >> s;
  s.insert(0,1,'(');
  s.push_back(')');
  f(s);
  cout << s.size();
}*/