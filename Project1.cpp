// Creating a number system conversion program
// binary --> decimal
// Decimal --> binary and many more to be added

#include <cmath>
#include <iostream>
using namespace std;

// This function converts binary input to decimal output.
int BinaryToDecimal(int num[], int sizeofarr) {
  int decimalValue = 0;
  for (int i = 0; i < sizeofarr; i++) {
    decimalValue += (num[i] * pow(2, i));
  }
  return decimalValue;
}

// This function displays the binary input.
void Display(int num1[], int size) {
  for (int i = size - 1; i >= 0; i--) {
    cout << num1[i] << " ";
  }
  cout << endl;
}

// Function to convert decimal number to binary number
void DecimaltoBinary(int number) {
  int quotent = number, remainder, BinNum[5];
  if (number < 16 && number > 0) {
    BinNum[0] = 0; // since positive number have 0 in sarting so its base index
                   // have value 0.
    cout << "Positive Number" << endl;
  } else if (number < 16) {
    BinNum[0] = 1; // since negative number have 1 in starting so its base index
                   // have value 1.
    cout << "Negative Number" << endl;
  }
  for (int i = 1; quotent > 2 || i != 6; i++) {
    quotent = quotent / 2;
    // number = quotent;
    remainder = quotent % 2;
    // cout << "Hello-----" << remainder << endl;
    BinNum[i] = remainder;
    // i++;
    cout << " " << BinNum[i] << endl;
  }
}

int main(int argc, char *argv[]) {
  /*  int value, size;
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
  */
  DecimaltoBinary(15);

  return 0;
}
