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

//�˵�����    
void speechManager::  show_Menu() {
  cout << "********************************************" << endl;
  cout << "*************  1.��ʼ�ݽ����� **************" << endl;
  cout << "*************  2.�鿴�����¼ **************" << endl;
  cout << "*************  3.��ձ�����¼ **************" << endl;
  cout << "*************  0.�˳������ɼ� **************" << endl;
  cout << "********************************************" << endl;
  cout << endl;
}

//�˳�ϵͳ
void speechManager:: exitSystem() {
  cout << "��ӭ�´�ʹ��" << endl;
  system("pause");
  exit(0);
}

//��ʼ��
void speechManager::initManager() {
  v.clear();
}

//����ѡ��
void speechManager::creatSpeaker() {
  string nameSeed = "ABCDEFGHIJKL";
  double x[2] = {0};
  vector<Speaker> p;
  for(int i = 0; i < nameSeed.size(); i ++) {
    p.emplace_back(Speaker((string)("ѡ��") + nameSeed[i], x, 10001 + i ));
  }
  v.emplace_back(p);
}

//��ʼ�������������̿���
void speechManager::startSpeech() {
  //��һ�ֱ���
  //1��ǩ
  speechDraw(1);
  //2����
  speechContest(1,1);
  speechContest(1,2);
  cout << "������������������1�ֱ�����ϡ�����������" << endl;
  system("pause");
  //3��ʾ�������
  showScore(1);
  //�ڶ��ֱ���
  speechDraw(2);
  speechContest(2,1);
  showScore(2);
  //123
  //4�������
  saveRecord();
  cout << "����������!" << endl;
  system("pause");
  system("cls");
}
//��ǩ
void speechManager::speechDraw(int i) {
  cout << "��<<" << i << ">>�ֱ���ѡ�����ڳ�ǩ" << endl << "-------------------" << endl;
  shuffle(v[i - 1].begin(), v[i - 1].end(), rnd);
  cout << "��ǩ���ݽ�˳������:" << endl;
  for(auto x: v[i - 1]) cout << x.getNum() << " ";
  cout << endl << "---------------" << endl;
  system("pause");
  cout << endl; 
}

//����
void speechManager:: speechContest(int i, int k) {
  if(k != 2) cout << "��������������������" << "��" << i << "�ֱ�����ʽ��ʼ" << "-----------" << endl;
  cout << format("��{}���������:\n", k);
  // cout << "��" << k << "��������Σ�" << endl;
  //��i�ֵ�k��
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
  for(int w = 0; w < 6; w ++)   cout << "���: " <<  (*(iter + w)).getNum() << "������ " <<  (*(iter + w)).getName() << "�ɼ��� " << (*(iter + w)).getScore()[i - 1] << endl;
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

//������ʾ
void speechManager::showScore(int round) {
  cout << "-----��" << round << "�ֽ���ѡ����Ϣ���£�------" << endl;
  for(int i = 0; i < 3; i ++) {
    cout << "���: " <<  (v[round - 1][i]).getNum() << "������ " <<  (v[round - 1][i]).getName() << "�ɼ��� " << (v[round - 1][i]).getScore()[round - 1] << endl;
  }
  if(round == 1) {
    for(int i = 6; i < 9; i ++) {
       cout << "���: " <<  (v[round - 1][i]).getNum() << "������ " <<  (v[round - 1][i]).getName() << "�ɼ��� " << (v[round - 1][i]).getScore()[round - 1] << endl;
    }
  }
  cout << endl;
  system("pause");
  // system("cls");
}
//�������
void speechManager:: saveRecord() {
  fstream fio ("jilu.csv", ios::in|ios::out|ios::app);
  for(int i = 0; i < 3; i ++) {
    // fio << v[1][i].getNum() << " " << v[1][i].getName() << " " << v[1][i].getScore();
    fio << format("��ţ�{}������{}�÷֣�{:.8f} ",v[1][i].getNum(), v[1][i].getName(),v[1][i].getScore()[1]);
  }
  fio << endl;
  fio.close();
}

//��ȡ��¼
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
      cout << "��" << i << "�죺" <<endl;
      stringstream ss(str);
      string a, b, c;//�ھ��Ǿ�����
      ss  >> a >> b >> c;
      cout << format("�ھ���\n{}\n�Ǿ�\n{}\n����\n{}\n", a, b, c);
      ++ i;
    }    
  }
  else cout << "��δ�б�����¼";
  fio.close();
  cout << endl;
  system("pause");
}
//����ļ�
void speechManager:: clearRecord() {
  fstream fio("jilu.csv", ios::out|ios::trunc);
  if(fio.is_open()) {
    cout << "��ճɹ�";
  } else cout << "�������ǿյ�" ;
  fio.close();
  cout << endl;
  system("pause");
}
speechManager::  ~speechManager() {

}
