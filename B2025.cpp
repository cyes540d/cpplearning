//#include <stdio.h>
//int main(){
//  printf("  *  \n *** \n*****\n *** \n  *  ");
//}
#include <iostream>
#include <format>
using namespace std;
int main(){
  // cout << "  *  " << endl;
  // cout << " *** " << endl;
  // cout << "*****" <<endl;
  // cout << " *** " << endl;
  cout << format("  *  \n *** \n*****\n *** \n  *  ") << endl;
      // cout << format("  *  \n")
      //    << format(" *** \n")
      //    << format("*****\n")
      //    << format(" *** \n")
      //    << format("  *  \n");
}
