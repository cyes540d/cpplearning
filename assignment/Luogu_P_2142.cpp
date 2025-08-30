#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
class bint {
  int size = 0;
  int* digits = nullptr;
  void reset(int len) {
    if (digits != nullptr) {
      delete[] digits;
      digits = nullptr; 
    }
    digits = new int [len]();
    size = len;
  }
  void trim() {
      while(digits[size - 1] == 0 && size > 1) {
        size --;
      }
  }
 public:
  ~bint(){
    if(digits == nullptr) return;
    delete[] digits;
    digits = nullptr;
  }
  bint(){}
  bool operator<(bint& rhs) {
    if(size != rhs.size) return size < rhs.size;
    for(int i = size - 1; i >= 0; i --) {
      if(digits[i] != rhs.digits[i]) return digits[i] < rhs.digits[i];
    }
    return false;
  }
  bint operator-(bint& rhs) {
    bint dif;
    dif = *this;
    for(int i = 0; i < size; i ++) {
      if(i < rhs.size) dif.digits[i] -= rhs.digits[i];
      if(dif.digits[i] < 0) {
        dif.digits[i] += 10;
        dif.digits[i + 1] -= 1;
      }
    }
    dif.trim();
    return dif;
  }
  bint operator+(bint& rhs) {
    bint sum;
    sum.size = max((*this).size, rhs.size) + 1;
    sum.digits = new int [sum.size]();
    for(int i = 0; i < sum.size - 1; i ++) {
      if(i <= (*this).size - 1) sum.digits[i] += this->digits[i];
      if(i <= rhs.size - 1) sum.digits[i] += rhs.digits[i];
      if(sum.digits[i] > 9){
        sum.digits[i] -= 10;
        sum.digits[i + 1] += 1;
      }
    }
    sum.trim();
    return sum;
  }
  bint& operator=(bint& rhs) {
    reset(rhs.size);
    memcpy(digits, rhs.digits, size * 4);
    return *this;
  }
  bint& operator=(string str) {
    reset(str.size());
    for(int i = 0; i < size; i ++) {
      digits[i] = str[size - 1 - i] - '0';
    }    
    return *this;
  }
  friend istream& operator>> (istream& lhs, bint& a) {
    string str;
    lhs >> str;
    a = str;
    return lhs;
  }
  friend ostream& operator<< (ostream& lhs,const bint& a) {
    for(int i = a.size - 1; i >= 0; i --) {
      lhs << a.digits[i];
    }
    return lhs;
  }
};
int main() {
  bint a, b;
  cin >> a >> b;
  // cout << a + b << endl;
  if(a < b) {
    cout <<  '-' << b - a << endl;
  } else {
    cout << a - b << endl;
  }
}