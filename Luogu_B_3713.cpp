//vector<string>
#include <iostream>
#include <string>
#include <cstring>
#include <format>
using namespace std;
int main() {
  int n,m;
  cin >> n >> m;
  char c_title[m][21];

  for(int i = 0; i < m; i ++) {
    cin >> c_title[i];
    // cout << title[i];
  }
  for(int j = 0; j < n; j ++) {
    string name;
    cin >> name;
    // string norm; 
    for(int i = 0; i < m; i ++) {
      string norm; 
      norm += format("{0}.zip/{0}/{1}/{1}.cpp",name,c_title[i]);
      // norm += name;
      // norm += ".zip/";
      // norm += name;
      // norm += "/";
      // norm += c_title[i];
      // norm += "/";
      // norm += c_title[i];
      // norm += ".cpp";
      string judge;
      cin >> judge;
      if(judge == norm) cout << "Fusu is happy!" << endl;
      else cout << "Fusu is angry!" << endl;
    }

  }
}