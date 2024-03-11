// In this we will learn the concept of templates in cpp

#include <iostream>
using namespace std;
// the template in c++ is nothing but a kind of variable datatype that is
// defined during compilation.
template <class T> class vector1 {
public:
  int size;
  T *arr;
  vector1(int p) {
    size = p;
    arr = new T[size];
    cout << "The size of p is: " << sizeof(p) << endl;
    cout << "The size of size is: " << sizeof(size) << endl;
    cout << "The size of arr is: " << sizeof(arr) << endl;
  }

  void set_data() {
    int pol;
    for (int i = 0; i < size; i++) {
      cin >> pol;
      arr[i] = pol;
    }
  }

  void get_data() {
    for (int i = 0; i < size; i++) {
      cout << "value at index" << i << " is " << arr[i] << endl;
    }
  }
};
int main(int argc, char *argv[]) {
  vector1<int> poo(2); // this describe that the "T" template is replaced by int
                       // data type during compilation.
  poo.set_data();
  poo.get_data();
  cout << "Happy endling" << endl;
  return 0;
}
