// Creating a number system conversion program
// binary --> decimal
// Decimal --> binary and many more to be added

#include <cmath>
#include <iostream>
using namespace std;

int BinaryToDecimal(int num[], int sizeofarr) {
  int decimalValue = 0;
  for (int i = 0; i < sizeofarr; i++) {
    decimalValue += (num[i] * pow(2, i));
  }
  return decimalValue;
}

void Display(int num1[], int size) {
  for (int i = size - 1; i >= 0; i--) {
    cout << num1[i] << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  int value, size;
  cout << "Enter the length of binary digits: " << endl;
  cin >> size;
  int num[size];
  cout << "Enter the binary number: " << endl;
  for (int i = size - 1; i >= 0; i--) {
    cin >> num[i];
  }

  Display(num, size);
  cout << "The Decimal value of the binary number "
       << "is : " << BinaryToDecimal(num, size) << endl;

  return 0;
}
