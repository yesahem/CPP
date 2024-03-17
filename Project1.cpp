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

// This function displays the binary output.
void Display(int num1[], int size) {
  for (int i = size - 1; i >= 0; i--) {
    cout << num1[i] << " ";
  }
  cout << endl;
}

// displays the output in binary form of decimal input.
void Display_Binary(int arr[], int size, int num) {

  cout << "The elements stored in the arrays are: " << endl;
  if (num < 0) {
    cout << "1 ";

  } else {
    cout << "0 ";
  }
  for (int i = size - 1; i >= 0; i--) {
    cout << arr[i] << " ";
  }
}

// Function to convert decimal number to binary number
void DecimaltoBinary(int number) {

  int quotent, remainder, BinNum[4];
  if (number < 0) {
    quotent = -1 * number;
  } else {
    quotent = number;
  }
  for (int i = 0; quotent > 1 || i != 4; i++) {

    remainder = quotent % 2;
    quotent = quotent / 2;
    BinNum[i] = remainder;
    // cout << " " << BinNum[i] << endl;
  }
  Display_Binary(BinNum, 4, number);
}

// Function to convert Binary number into Octal number

int BinaryToOctal(int num[], int sizeofarr) {
  int octalValue = 0;
  for (int i = 0; i < sizeofarr; i++) {
    octalValue += (num[i] * pow(2, i));
  }
  return octalValue;
}

int main(int argc, char *argv[]) {
  // Below code converts binary input into decimal
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
  // Below code for converting decimal value to Binary.
  /*
  int num;
  cout << "Enter the number (from 0 to 15) you want the binary of: " << endl;
  cin >> num;

  DecimaltoBinary(num);
*/

  // Below function converts binary input into octal.

  int size, input;
  cout << "Enter the size of array: " << endl;
  cin >> size;
  int arr[size];
  cout << "enter the Binary number: " << endl;
  for (int i = 0; i < size; i++) {
    cin >> input;
    if (input == 0 || input == 1) {
      arr[i] = input;
    } else {

      cout << "Not a valid binary number" << endl;
      break;
    }
  }
  cout << "The conversion of binary to octal is " << BinaryToOctal(arr, size)
       << endl;
  // to write a display function for this function to display the correct output
  // of element stored in the array.
  return 0;
}
