#include <iostream>
#include "speechManager.h"
using namespace std;

//??????????
speechManager sm;

int main () {

  int choice;

  while(true) {
    sm.show_Menu();

    cout << "����������ѡ��:" << endl;

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
        cout << "����������Ч���֣�����������" << endl;
        system("pause");
        system("cls");
        break;
    }
  }


  system("pause");//���������
  return 0;
}