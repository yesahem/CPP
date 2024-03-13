// In this we will learn about the multi paramenter templates
// Let's make an calculator program using the templates.
// Radhe Radhe.

#include <iostream>
using namespace std;

template <class T, class T2> class calculator {

public:
  T value1;
  T2 value2;
  calculator() {}
  calculator(T value, T2 val2) {
    value1 = value;
    value2 = val2;
  }
  void sum(T value1, T2 value2) {
    cout << "The sum of both the number is :" << value1 + value2 << endl;
  }
  void subtract(T value1, T2 value2) {
    cout << "The difference of both the numbers is:" << value1 - value2 << endl;
  }
  void product(T value1, T2 value2) {
    cout << "The difference of both the numbers is:" << value1 * value2 << endl;
  }
  void divide(T value1, T2 value2) {
    cout << "The ratio of both the numbers is:" << value1 / value2 << endl;
  }

public:
};
int main() {
  char opinion;
  float num1, num2;
  cout << "Enter the operation you want to perform:" << endl;
  cin >> opinion;
  cout << "Enter the numbers:" << endl;
  cin >> num1;
  cin >> num2;

  calculator<float, float> obj1;
  switch (opinion) {
  case '+':
    obj1.sum(num1, num2);
    break;
  case '-':
    obj1.subtract(num1, num2);
    break;
  case '*':
    obj1.product(num1, num2);
    break;
  case '/':
    // cout << ((num2 == 0) ? "Can't divide by zero" : obj1.divide(num1,num2));
    if (num2 == 0) {
      cout << "Can't divide by 0" << endl;
    } else {
      obj1.divide(num1, num2);
    }
    break;
  default:
    cout << "Oops wrong operation choosen";
    break;
  }

  return 0;
}
