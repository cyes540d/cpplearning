#include <iostream>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
   
  string str;
  cin  >> str;
  if(str.find('.') != string::npos) {
    int dian = str.find('.');
    string str1 = str.substr(0,dian);
    string str2 = str.substr(dian + 1);
    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());
    while(str1[0] == '0') {
      str1.erase(0,1);
    }
    while(str1.empty()) {
      str1.push_back('0');
    }
    while(str2.back() == '0') {
      str2.pop_back();
    }
    if(str2.empty()) str2.push_back('0');
    cout << str1 << "." << str2;
  } else if(str.find('/') != string::npos) {
    int dian = str.find('/');
    string str1 = str.substr(0,dian);
    string str2 = str.substr(dian + 1);
    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());
    while(str1[0] == '0') {
      str1.erase(0,1);
    }
    if(str1.empty()) {
      str1.push_back('0');
    }
    while(str2[0] == '0') {
      str2.erase(0,1);
    }
    cout << str1 << "/" << str2;
  } else {
    bool bai = false;
    if(str.back() == '%') {
      str.pop_back();
      bai = true;
    }
    reverse(str.begin(),str.end());
    while(str[0] == '0') {
      str.erase(0,1);
    }
    if(str.empty()) str.push_back('0');
    if(bai) str.push_back('%');
    cout << str;
  }
}