#include <iostream>
// a basic calculator app
//
using namespace std;
int main(int argc, char *argv[]) {
  int num1, num2;
  char operation;

  cout << "Enter the first Number: " << endl;
  cin >> num1;
  cout << "Enter the second Number: " << endl;
  cin >> num2;

  cout << "Enter the operation you want to perform: " << endl;
  cin >> operation;
  switch (operation) {
  case '+':
    cout << "The sum of both the numbers are: " << num1 + num2;
    break;
  case '-':
    cout << "The difference of both the numbers are: " << num1 - num2;
    break;

  case '/':
    if (num2 == 0) {
      cout << "The denominator can't be zero" << endl
           << "Kindly enter a valid num2" << endl;
    } else {
      cout << "The ratio of both the numbers are: " << (float)num1 / num2;
    }
    break;
  case '*':
    cout << "The product of both the numbers are: " << num1 * num2;
    break;
  case '%':
    cout << "The remainder after num1/num2 is: " << num1 % num2;
    break;
  default:
    cout << "Kindly Enter a valid operation ";
  }
  return 0;
}
