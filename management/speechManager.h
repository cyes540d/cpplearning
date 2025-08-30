#pragma once
#include <iostream>
#include <vector>

using namespace std;



class Speaker {
  int m_Num;
  string m_Name;
  double m_Score[2];
 public:
  // Speaker() {}
  Speaker(const string& name, double (&score)[2], int num);
  Speaker(const Speaker& other);
  string getName();
  double* getScore();
  void setName(string name);
  void setScore(double (&score) [2]);
  void setScore1(double x);
  void setScore2(double x);
  int getNum();
  void setNum(int num);
  Speaker& operator=(const Speaker& rhs);
};

//设计演讲管理类
class speechManager {  
  using vS = vector<Speaker>;
 public:
  vector<vector<Speaker>> v;
    // std::vector<std::vector<std::vector<Speaker>>> v(3);  

  //构造函数
  speechManager();
  //菜单功能
  void show_Menu();
  //退出系统
  void exitSystem();
  //初始化函数
  void initManager();
  //创建选手
  void creatSpeaker();
  //开始比赛，比赛流程控制
  void startSpeech();
  //抽签
  void speechDraw(int i);
  //比赛
  void speechContest(int i, int k);
  //晋级显示
  void showScore(int round);
  //保存分数
  void saveRecord();
  //读取记录
  void loadRecord();
  //清空文件
  void clearRecord();
  //析构函数
  ~speechManager();
};
