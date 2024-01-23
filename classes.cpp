#include <iostream>

// in this we will learn about classes in C++
using namespace std;
class Employee {
private:
  int salary, Bonus, Emp_ID; // These are the private constructer and can be
                             // accessed through the function declared inside
                             // this class and can't be accessed seperatly.

public:
  string Name; // these are the public constructer and can be
               // accessed or changed thorugh any other function.
  void Display();
  void set_attribute_pvt() {
    salary = 120000;
    Emp_ID = 18947378;
    Bonus = 10340;
  }
};

// this function is declared under the Employee class and is used to print the
// name of the Employee
void Employee ::Display() {
  cout << Name;
  cout << endl
       << "The Employee having Employee ID:  " << Emp_ID << endl
       << " Name " << Name << endl
       << "Has the current salary RS: " << salary << endl
       << "Gets the Bonus of RS: " << Bonus << endl;
}

int main(int argc, char *argv[]) {
  cout << "Everything is fine:))" << endl;

  Employee obj1; /* after creating the object always call the function using the
                  "object -->dot operator -->function_name" format(an example
                  is given below)*/
  /*  obj1.salary = 120000;  //this is a private member of Employee class so
   only function declared inside the Emplyee class will have the right to change
   it.
  */
  obj1.set_attribute_pvt();
  obj1.Name = "Shishu Ranjan";
  obj1.Display();

  return 0;
}
