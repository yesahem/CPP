#include <iostream>
// performing addition
using namespace std;
int main(int argc, char *argv[]) {
  int num1, num2;
  cout << "Enter the First Number: ";
  cin >> num1;
  cout << "Enter the second Number: ";
  cin >> num2; // 'cin' function is already defined in iostrem header file used
               // to take input and store it in the assigned variable
  cout << "The sun of first and second number is: " << num1 + num2;
  return 0;
}
