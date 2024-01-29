// In this we will learn about the constructors
#include <iostream>
#include <math.h>
using namespace std;
class Points {
  int x, y;

public:
  friend int Distance_calc(Points, Points);
  Points(int, int); // constructor declaration(as it takes paramenters so it is
                    // a parameterized consturctor)
  void Display() {
    cout << "The X-Coordinate is: " << x << endl
         << "The Y-Coordinate is:" << y << endl;
  }
};
Points::Points(int a, int b) // consturctor definiation
{
  x = a;
  y = b;
}

// make a function which takes two point argument and calculate the distance
// between them.
int Distance_calc(Points p1, Points p2) {
  int x_cor, y_cor;
  x_cor = (p1.x - p2.x);
  y_cor = (p1.y - p2.y);
  x_cor = pow(x_cor, 2);
  y_cor = pow(y_cor, 2);
  return sqrt((x_cor + y_cor));
}
int main(int argc, char *argv[]) {
  Points p1(1, 0), p2(70, 0);
  p1.Display();
  p2.Display();
  cout << "------------------------------" << endl;
  printf("The distance between the points is: %d\n", Distance_calc(p1, p2));
  return 0;
}
