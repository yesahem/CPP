// in this we will learn about friend classes
#include <iostream>
using namespace std;

class complex {
  int real_num, complex_num;
  friend class complexx;

public:
  void setnumber(int, int);
  void Display() {
    cout << "The number is " << real_num << " + " << complex_num << "i" << endl;
  }
};

void complex::setnumber(int a, int b) {
  real_num = a;
  complex_num = b;
}

// below class is the friend class of class complex

class complexx {
  int num1, num2;

public:
  void Display_test(complex object1) {
    cout << "The number entered in the 1st class is " << object1.real_num
         << " + " << object1.complex_num << "i" << endl;
  }
};

int main(int argc, char *argv[]) {
  complex object1;
  object1.setnumber(21, 32);
  object1.Display();
  complexx d2;
  d2.Display_test(object1);
  return 0;
}
