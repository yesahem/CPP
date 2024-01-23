#include <iostream>
#include <string>
using namespace std;

class binary {
private:
  string bin;

  void chk_Bin();

public:
  void Display();
  void Input();
  void ones_comp();
};

// Display the input after checking the number if binary then printn
void binary::Display() {

  chk_Bin();
  for (int i = 0; i <= bin.length(); i++) {
    cout << bin[i];
  }
}

// this function takes the input from the user.
void binary ::Input() {
  cout << "Enter a binary number: ";
  cin >> bin;
}

// checks whether the input is binary or not.

void binary ::chk_Bin() {
  // this is a nested function (called within another function)
  cout << "The input is ";
  for (int i = 0; i < bin.length(); i++) {
    if (bin[i] != '0' && bin[i] != '1') {
      cout << "Not a valid binary number ";
      exit(1);
    }
  }
}

// this function takes the one's complement of the binary number
void binary ::ones_comp() {
  cout << endl;
  for (int i = 0; i < bin.length(); i++) {
    if (bin[i] == '1') {
      bin[i] = '0';
    } else {
      bin[i] = '1';
    }
  }
}

int main(int argc, char *argv[]) {
  cout << endl << endl;
  binary bi;
  bi.Input(); // function working fine
  bi.Display();
  bi.ones_comp();
  cout << "The one's complement of ";
  bi.Display();
  return 0;
}
