#include <iostream>
// this is the simplest c++ template in which we are printing the values of
// declared  variable this is  a global variable
int pink = 789;
// using namespace std;
int main(int argc, char *argv[]) {
  int a = 7, b = 48;
  std::cout << "the value of a is " << a << " The value of b  is " << b
            << " and the value of global variable is " << pink;
  // :: this is called the scope resolution operator
  return 0;
}
