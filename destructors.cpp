#include <iostream>
using namespace std;
class Bank {
  int principal;
  int time;
  float rate;
  float return_val;

public:
  void show();
  Bank(int p, float r, int t);
  ~Bank();
};

Bank ::~Bank() {
  cout << "We are inside the destructor" << endl;
} /* Destrcutors are the member function called automatically to destroy the
     object wich will not be furter used and free the memory result in automatic
     memory management*/

void Bank::show() {
  cout << "We are inside the show function" << endl;
  cout << "-------------------------------" << endl;
  cout << "The value of " << principal << " at the rate of " << rate
       << " after " << time << " year will be " << return_val << endl;
}
Bank::Bank(int p, float r, int t) {
  principal = p;
  rate = r;
  time = t;
  return_val = principal;
  for (int i = 0; i < time; i++) {

    return_val = return_val * (1 + rate);
  }
}

int main(int argc, char *argv[]) {
  int principal, time;
  float rate;
  cout << "Enter the principal amount, time and the intrest rate respectiviely"
       << endl;
  cin >> principal >> time >> rate;
  Bank b1(principal, rate, time);
  b1.show();

  return 0;
}
