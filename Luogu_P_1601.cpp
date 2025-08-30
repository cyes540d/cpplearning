#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
class bint {
  int size = 0;
  int* digits = nullptr;
 public:
  ~bint(){
    if(digits == nullptr) return;
    delete[] digits;
    digits = nullptr;
  }
  bint(){}
  bint operator+(bint& rhs) {
    bint sum;
    sum.size = max((*this).size, rhs.size) + 1;
    sum.digits = new int [sum.size * 4]();
    // memset(sum.digits, 0, sum.size * 4);
    for(int i = 0; i < sum.size - 1; i ++) {
      if(i <= (*this).size - 1) sum.digits[i] += this->digits[i];
      if(i <= rhs.size - 1) sum.digits[i] += rhs.digits[i];
      if(sum.digits[i] > 9){
        sum.digits[i] -= 10;
        sum.digits[i + 1] += 1;
      }
    }
    if(sum.digits[sum.size - 1] == 0) {
      sum.size --;
    } 
    return sum;
  }
  bint& operator=(string str) {
    size = str.size();
    digits = new int [size * 4];
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
  cout << a + b << endl;
}