// in this we will take an example of pointer to object

#include <iostream>
using namespace std;
class student {
public:
  int test_var;

  void set_test_var() {
    int a;
    cout << "Enter the number " << endl;
    cin >> a;
    test_var = a;
  }
  void get_test_var() {
    cout << "The value of test var variable is: " << test_var << endl;
  }
};

class man : public student {
public:
  int p;
  void pata_nhi_bc() { cout << "Man class is called" << endl; }
};
int main(int argc, char *argv[]) {
  student s1;
  student *s;
  s = &s1;
  s->set_test_var();
  s->get_test_var();
  return 0;
}
