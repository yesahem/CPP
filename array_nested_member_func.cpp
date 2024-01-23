// Example of array and nested member function

#include <iostream>
using namespace std;
class shop {
  int Item_price[20];
  int ItemId[20];
  int count;

public:
  void set_count() { count = 0; }
  void set_Price();
  void get_Price();
};

void shop ::set_Price() {
  cout << "Enter the Item ID: " << endl;
  cin >> ItemId[count];
  cout << "Enter the Item Price: " << endl;
  cin >> Item_price[count];
  count++;
}

void shop ::get_Price() {
  for (int i = 0; i < count; i++) {

    cout << "The Item having ItemId " << ItemId[i]
         << " is available at price of ₹" << Item_price[i] << endl;
  }
}
int main(int argc, char *argv[]) {
  shop dukaan;
  dukaan.set_count();
  // set_price function can be called within loop to iterate the function insted
  // of calling it multiple times
  dukaan.set_Price();
  dukaan.get_Price();
  return 0;
}
