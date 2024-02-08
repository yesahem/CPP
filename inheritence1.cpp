/*in this we will going to learn about inheritance (specifically single
 * inheritnce) in cpp*/
#include <iostream>
using namespace std;

class Employee {
public:
  int empid;
  int salary;
  void setdata(int);
  Employee() {
    cout << "default constructor" << endl;
  } /* a default constructor is necessary since wehenever the child
class is invoked complier calls the default constructor by
deault otherwise it will throw an error*/
  // Employee(int);
};
void Employee ::setdata(int sal) { salary = sal; }

// this is a child class inheritated from class Employee
class Programmer : public Employee {
public:
  int programcode_assign;
  Programmer(int n, int p, int sal) {
    empid = n;
    salary = sal;
    programcode_assign = p;
  }
  void show();
};

void Programmer::show() {
  cout << "The program code assign to the programmer class is "
       << programcode_assign << " and the empid is " << empid
       << " and the salary programmer is getting is " << salary << endl;
}
int main(int argc, char *argv[]) {
  Employee ahem;
  // ahem.setdata(34000);
  Programmer shishu(3, 9, 340000);
  shishu.show();
  return 0;
}
