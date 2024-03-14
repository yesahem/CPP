// Learning about vectors in cpp
// Learn more about vectors with time at cplusplus.com
#include <iostream>
#include <vector>
using namespace std;

// this function takes the vector address so that all the operatoion in order to
// display the element of the array must be performaed
void display(vector<int> &v1) {
  cout << "The elements of the vectors are: " << endl;
  for (int i = 0; i < v1.size(); i++) {
    cout << v1[i] << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  int size, value;
  vector<int> vec1;
  cout << "Enter the size of vector: " << endl;
  cin >> size;
  for (int i = 0; i < size; i++) {
    cout << "Enter the element of the vector: " << endl;
    cin >> value;
    vec1.push_back(value);
  }

  display(vec1);
  return 0;
}
