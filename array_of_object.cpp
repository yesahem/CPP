// In this we will learn the concept of array of object.
#include <iostream>
#include <istream>

using namespace std;

class Employee {
  int emp_id;
  char name[30];

public:
  void set_data();
  void get_data();
};

void Employee ::set_data() {
  cout << "Enter the Employee id: ";
  cin >> emp_id;
  cout << "Enter the Name of the employee" << endl;
  cin >> name;
}

void Employee ::get_data() {
  cout << "The Employee having id " << emp_id << "is ";
  cout << name << endl;
  /*for (int i = 0; i < 30; i++) {
    cout << name[i] << " ";
  }*/
}
int main(int argc, char *argv[]) {
  Employee s1;    // this will create a single object of class employee
  Employee s[10]; // this will create 10 objects of class employee in continuous
                  // memory block.(array of objects)
  for (int i = 0; i < 3; i++) {
    s[i].set_data();
  }
  for (int i = 0; i < 3; i++) {
    s[i].get_data();
  }

  return 0;
}
