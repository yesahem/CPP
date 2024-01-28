// We will learn about friend function
#include <iostream>
using namespace std;
class complex {
  int a, b;
  friend complex
      addition(complex,
               complex); // declared the addition function as friend function.

public:
  void setnumber(int, int);
  void Display() {
    cout << "Your number is " << a << " + " << b << "i" << endl;
  }
};

void complex ::setnumber(int in1, int in2) {
  a = in1;
  b = in2;
}

complex addition(complex first, complex second) {
  complex third;

  /*third.a = (first.a + second.a);
  third.b = (first.b + second.b);
  */
  // the above declaration can also be done using the below method
  // since we already have a function to set number so we will use it.
  third.setnumber((first.a + second.a), (first.b + second.b));
  return third;
}

// the below function display only a set of line on the screen to seperate the
// result from the operand.

int main(int argc, char *argv[]) {
  complex first, second;
  first.setnumber(10, 22);
  second.setnumber(200, 23);
  first.Display();
  second.Display();
  complex third = addition(
      first, second); // addition.Display ----> this method is wrong as addition
                      // is not the function of the class . it has access only
                      // to the private member of the complex class.
  third.Display();
  return 0;
}
