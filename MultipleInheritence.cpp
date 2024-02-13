#include <iostream>
using namespace std;

class student {
protected:
  int roll_no;

public:
  void set_number(int, int, int);
  void get_number(void);
};

class test : public student /*here student class is the base class for test
                              class and test class is the child for the student
                              class and student class's member is inherited as
                              public member of the test class*/

{
protected:
  float phy, chem, maths;

public:
  void set_number(int a, int b, int c) {
    phy = a;
    chem = b;
    maths = c;
  }
  void get_number(void) {
    cout << "The marks obtained in physics is " << phy << endl
         << "The marks obtained in chem is " << chem << endl
         << "The marks obtained in maths is " << maths << endl;
  }
};

class result : public test /*here test class is the base class for result class
                              and result class is the child for the test class
                              and test class's member is inherited as public
                              member of the result class*/
{
public:
  void Display(void) {
    cout << "Total percentage is " << (float)(phy + chem + maths) / 3 << endl;
  }
};
int main(int argc, char *argv[]) {

  result shishu;
  shishu.set_number((float)96, (float)30, (float)76);
  shishu.Display();
  return 0;
}
