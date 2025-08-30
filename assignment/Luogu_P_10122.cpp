// #include <iostream>
// #include <vector>
// using namespace std;
// void wodd(long long x,vector<vector<int>>& ans) {
//   int cnt = 0;
//   int m = 0;
//   int a[10];
//   while(x != 0) {
//     // x %= 10;
//     m = x % 10;
//     x /= 10;
//     cnt ++;
//     if(cnt % 2 == 1) {
//       a[cnt] = m;
//     }
//   }
//     if(cnt % 2 == 0 ) cout << "uim wins." << endl;
//     else if(cnt != 9) cout << "xiaoa wins." << endl;
//     else if(cnt == 9) {
//       for(int i = 0; i < 8; i ++) {
//         for(int j = 0; j < 3; j ++) {
//           for(int k = 1; k < 10; k += 2 ){
//             if(ans[i][j] == a[k]) {
//               ans[i][j] = 0;
//             }
//           }
//         }
//       }
//       bool judge = true;
//       for(int i = 0; i < 8; i ++){
//         int cnt = 0;
//         for(int j = 0; j < 3; j ++) {
//           if(ans[i][j] == 0) cnt ++;
//         }
//         if(cnt == 3) judge = false;
//       }
//       if(judge) {cout << "drew.";}
//       else cout << "xiaoa wins.";
//     }    
// }
// int main() {
//   string str;
//   cin >> str;
//   vector<vector<int>> ans(8,vector<int>(3));
//   int j = 1;
//   for(int i = 0; i < 3; i ++) {
//     for(int cnt = 0; cnt < 3; cnt ++) {
//       ans[i][cnt] = j + cnt;
//     }
//     j +=3;
//   }
//   j = 1;
//   for(int i = 3; i < 6; i ++) {
//     for(int cnt = 0; cnt < 3; cnt ++) {
//       ans[i][cnt] = j + 3 * cnt;
//     }
//     j +=1;
//   }
//   ans[6][0] = 1;  ans[6][1] = 5;  ans[6][2] = 9;
//   ans[7][0] = 3;  ans[7][1] = 5;  ans[7][2] = 7;
//   // for(auto& line: ans) {
//   //   for(auto& x: line) {
//   //     cout << x;
//   //   }
//   //   cout << endl;
//   // }
//   long long x = stoll(str);
//   wodd(x,ans);
// }     
#include <iostream>
#include <vector>
using namespace std;
bool isSame(int x, int y, int a, int b, int c) {
  if(x == y) return x == a && a == b && b == c; 
  else {
    int cnt1 = (x == b) + (x == c) + (x == a);
    int cnt2 = (y == b) + (y == c) + (y == a);
    if(cnt1 + cnt2 == 3 && cnt1 != 3 && cnt2 != 3) return true;
    else return false;
  }
}

bool isWin(auto& board, int x, int y) {
  for(int i = 0; i < 3; i ++) {
      if(isSame(x,y, board[i][0], board[i][1], board[i][2])) return 1;
      if(isSame(x,y, board[0][i], board[1][i], board[2][i])) return 1;  
  }
  if(isSame(x, y,board[0][0], board[1][1], board[2][2])) return 1;
  if(isSame(x, y,board[0][2], board[2][0], board[1][1])) return 1;  
  return 0;
}
int main() {
  vector<string> board(3);
  for(auto& x: board) {
    cin >> x;
  }
  int cnt1 = 0, cnt2 = 0;
  for(int i = 0; i < 26; i ++) {
    cnt1 += isWin(board,i + 'A',i + 'A');
    for(int j = 0; j < i; j ++) {
      cnt2 += isWin(board,i + 'A',j + 'A');
    }
  }
  cout << cnt1 << endl << cnt2;
}
//i+'A'

