#include <iostream>
#include <cmath>
using namespace std;
void a(string& game ,int x) {
  int cw = 0,cl = 0;
  int j = game.find('E');
  for(int i = 0; i < j; i ++) {
    if(game[i] == 'W') cw ++;
    if(game[i] == 'L') cl ++;
    if((cw >= x || cl >= x) && abs(cw - cl) >= 2) {
      cout << cw << ":" << cl << endl;
      cw = cl = 0;
    }
  }
  cout << cw << ":" << cl << endl;
  cout << endl;
}
int main() {
  string game,str;
  while(cin >> str) {
    game += str;
    if(game.find('E') != string::npos) break;
  }

  a(game, 11);
  a(game, 21);

}