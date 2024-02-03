#include <iostream>
using namespace std;
// in this we will make a program to calculate the bank deposite and the
// resultant

class BankDeposite {
  int principal;
  float rate;
  int time;
  float final_principal;

public:
  BankDeposite() {
    principal = 0;
    rate = 0;
    time = 0;
  }
  BankDeposite(int p, int r, int t);
  BankDeposite(int p, float r, int t);
  void show();
};

BankDeposite::BankDeposite(int p, int r, int t) {
  principal = p;
  rate = (float)r / 100;
  time = t;
  for (int i = 0; i < time; i++) {
    final_principal = principal * (1 + rate);
  }
}

BankDeposite::BankDeposite(int p, float r, int t) {
  principal = p;
  rate = r;
  time = t;
  for (int i = 0; i < time; i++) {
    final_principal = principal * (1 + rate);
  }
}

void BankDeposite ::show() {
  cout << "The principal amount is " << principal << endl
       << "The intrest rate is " << rate << endl
       << "The time Period is " << time << endl
       << "The total amount after the maturity will be " << final_principal
       << endl;
}

int main(int argc, char *argv[]) {
  BankDeposite bd1, bd2;
  bd1 = BankDeposite(100, 5, 1);
  // bd2 = BankDeposite(100, (float)0.04, 2);
  bd1.show();
  // bd2.show();
  return 0;
}
