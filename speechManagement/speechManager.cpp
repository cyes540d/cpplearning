#include "speechManager.h"
#include <chrono>
#include <algorithm>
#include <random>
#include <set>
#include <format>
#include <fstream>
#include <sstream>
mt19937 rnd(std::chrono::system_clock::now().time_since_epoch().count());



Speaker::Speaker(const string& name, double (&score)[2], int num): m_Name(name), m_Num(num) {
  memcpy(m_Score, score, sizeof(double) * 2);
}
Speaker::Speaker(const Speaker& other) {
  m_Num = other.m_Num;
  m_Name = other.m_Name;
  memcpy(m_Score, other.m_Score, sizeof(double) * 2);
}
string Speaker:: getName() {
    return m_Name;
}
double* Speaker::getScore() {
  return m_Score;
}
void Speaker::setName(string name) {
  m_Name = name;
}
void Speaker::setScore(double (&score) [2]) {
  memcpy(m_Score, score, sizeof(double) * 2);
}
void Speaker::setScore1(double x) {
  m_Score[0] = x;
}
void Speaker::setScore2(double x) {
  m_Score[1] = x;
}
int Speaker::getNum() {
  return m_Num;
}
void Speaker::setNum(int num) {
  m_Num = num;
}
Speaker& Speaker::operator=(const Speaker& rhs) {
  if(this != &rhs) {
    m_Name = rhs.m_Name;
    m_Num = rhs.m_Num;
    memcpy(m_Score, rhs.m_Score, sizeof(m_Score));
  }
  return *this;
}


speechManager::  speechManager() {
  initManager();
  creatSpeaker();
}                         

//菜单功能    
void speechManager::  show_Menu() {
  cout << "********************************************" << endl;
  cout << "*************  1.开始演讲比赛 **************" << endl;
  cout << "*************  2.查看往届记录 **************" << endl;
  cout << "*************  3.清空比赛记录 **************" << endl;
  cout << "*************  0.退出比赛成绩 **************" << endl;
  cout << "********************************************" << endl;
  cout << endl;
}

//退出系统
void speechManager:: exitSystem() {
  cout << "欢迎下次使用" << endl;
  system("pause");
  exit(0);
}

//初始化
void speechManager::initManager() {
  v.clear();
}

//创建选手
void speechManager::creatSpeaker() {
  string nameSeed = "ABCDEFGHIJKL";
  double x[2] = {0};
  vector<Speaker> p;
  for(int i = 0; i < nameSeed.size(); i ++) {
    p.emplace_back(Speaker((string)("选手") + nameSeed[i], x, 10001 + i ));
  }
  v.emplace_back(p);
}

//开始比赛，比赛流程控制
void speechManager::startSpeech() {
  //第一轮比赛
  //1抽签
  speechDraw(1);
  //2比赛
  speechContest(1,1);
  speechContest(1,2);
  cout << "————————第1轮比赛完毕——————" << endl;
  system("pause");
  //3显示晋级结果
  showScore(1);
  //第二轮比赛
  speechDraw(2);
  speechContest(2,1);
  showScore(2);
  //123
  //4保存分数
  saveRecord();
  cout << "本届比赛完毕!" << endl;
  system("pause");
  system("cls");
}
//抽签
void speechManager::speechDraw(int i) {
  cout << "第<<" << i << ">>轮比赛选手正在抽签" << endl << "-------------------" << endl;
  shuffle(v[i - 1].begin(), v[i - 1].end(), rnd);
  cout << "抽签后演讲顺序如下:" << endl;
  for(auto x: v[i - 1]) cout << x.getNum() << " ";
  cout << endl << "---------------" << endl;
  system("pause");
  cout << endl; 
}

//比赛
void speechManager:: speechContest(int i, int k) {
  if(k != 2) cout << "——————————" << "第" << i << "轮比赛正式开始" << "-----------" << endl;
  cout << format("第{}组比赛名次:\n", k);
  // cout << "第" << k << "组比赛名次：" << endl;
  //第i轮第k组
  int j;
  if(k == 1) j = 0;
  else j = 6;
  for(int w = 0; w < 6; j ++,w ++) {
    multiset<double> que;
    for(int q = 0; q < 10; q ++) {
      double score = (rnd() % 400 + 600) / 10.f;
      que.emplace(score);
    }
    que.erase(que.begin());que.erase(--que.end());
    double sum = accumulate(que.begin(), que.end(), 0.0);
    // for(auto x: que) sum += x;
    sum /= 8.0;
    if(i == 1)v[i - 1][j].setScore1(sum);
    if(i == 2)v[1][j].setScore2(sum);
  }
  auto iter = v[i - 1].begin() + (k - 1) * 6;
  sort(iter,iter + 6,[=](Speaker a, Speaker b){
    return a.getScore()[i - 1] > b.getScore()[i - 1];
  });
  for(int w = 0; w < 6; w ++)   cout << "编号: " <<  (*(iter + w)).getNum() << "姓名： " <<  (*(iter + w)).getName() << "成绩： " << (*(iter + w)).getScore()[i - 1] << endl;
  cout << endl;
  if(i == 1 && k == 2) {
    vS ps;
    for(int w = 0; w < 3; w ++) ps.emplace_back(v[0][w]);
    for(int w = 6; w < 9; w ++) ps.emplace_back(v[0][w]);
    v.emplace_back(ps);
  }
  // if(i == 2) {
  //   vS ps;
  //   for(int w = 0; w < 3; w ++) ps.emplace_back(v[1][w]);
  //   v.emplace_back(ps);
  // }
}

//晋级显示
void speechManager::showScore(int round) {
  cout << "-----第" << round << "轮晋级选手信息如下：------" << endl;
  for(int i = 0; i < 3; i ++) {
    cout << "编号: " <<  (v[round - 1][i]).getNum() << "姓名： " <<  (v[round - 1][i]).getName() << "成绩： " << (v[round - 1][i]).getScore()[round - 1] << endl;
  }
  if(round == 1) {
    for(int i = 6; i < 9; i ++) {
       cout << "编号: " <<  (v[round - 1][i]).getNum() << "姓名： " <<  (v[round - 1][i]).getName() << "成绩： " << (v[round - 1][i]).getScore()[round - 1] << endl;
    }
  }
  cout << endl;
  system("pause");
  // system("cls");
}
//保存分数
void speechManager:: saveRecord() {
  fstream fio ("jilu.csv", ios::in|ios::out|ios::app);
  for(int i = 0; i < 3; i ++) {
    // fio << v[1][i].getNum() << " " << v[1][i].getName() << " " << v[1][i].getScore();
    fio << format("编号：{}姓名：{}得分：{:.8f} ",v[1][i].getNum(), v[1][i].getName(),v[1][i].getScore()[1]);
  }
  fio << endl;
  fio.close();
}

//读取记录
void speechManager::  loadRecord() {
  string str = "jilu.csv";
  fstream fio (str, ios::in);
  char ch;
  fio >> ch;
  if(!fio.eof()) {
    fio.putback(ch);
    string str;
    int i = 1;
    while(getline(fio, str)) {
      cout << "第" << i << "届：" <<endl;
      stringstream ss(str);
      string a, b, c;//冠军亚军季军
      ss  >> a >> b >> c;
      cout << format("冠军：\n{}\n亚军\n{}\n季军\n{}\n", a, b, c);
      ++ i;
    }    
  }
  else cout << "尚未有比赛记录";
  fio.close();
  cout << endl;
  system("pause");
}
//清空文件
void speechManager:: clearRecord() {
  fstream fio("jilu.csv", ios::out|ios::trunc);
  if(fio.is_open()) {
    cout << "清空成功";
  } else cout << "本来就是空的" ;
  fio.close();
  cout << endl;
  system("pause");
}
speechManager::  ~speechManager() {

}
