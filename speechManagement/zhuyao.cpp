#include <iostream>
#include "speechManager.h"
using namespace std;

//??????????
speechManager sm;

int main () {

  int choice;

  while(true) {
    sm.show_Menu();

    cout << "请输入您的选择:" << endl;

    cin >> choice;

    switch(choice) {
      case 1:
        sm.startSpeech();
        break;
      case 2:
        sm.loadRecord();
        break;
      case 3:
        sm.clearRecord();
        break;
      case 0:
        sm.exitSystem();
        // return 0;
        break;
      default:
        cout << "您输入了无效数字，请重新输入" << endl;
        system("pause");
        system("cls");
        break;
    }
  }


  system("pause");//输入任意键
  return 0;
}