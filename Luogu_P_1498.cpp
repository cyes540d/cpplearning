#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
void f(vector<string>& matrix,int x, int y, int sizey) {
  int sizex = sizey / 2;
  int m1 = sizex / 2;

  if(sizey == 4) {
    matrix[1+x][0+y] = matrix[0+x][1+y] = '/';
    matrix[0+x][2+y] = matrix[1+x][3+y] = '\\';
    matrix[1+x][1+y] = matrix[1+x][2+y] = '_';
    return;
  }
  f(matrix,x,y+m1,sizex);
  f(matrix,x+m1,y,sizex);
  f(matrix,x+m1,y+sizex,sizex);
}
int main() {
  int n;
  cin >> n;
  int sizey = pow(2,n + 1);
  vector<string> matrix(sizey / 2,string(sizey,' '));
  f(matrix,0,0,sizey);
  for(auto line: matrix) {
    for(auto x: line) {
      cout << x;
    }
    cout << endl;
  }
}