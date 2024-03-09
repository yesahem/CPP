// In this we will do an excercise givem bby cwh in cpp

/* #include<bits/stdc++.h> this is a GNU header file which include all the
 * standard library read more on floaternet*/

#include <iostream>
#include <math.h>
#define PI 3.142857
// float degree;
using namespace std;

class normal_calc {
public:
  float add(float, float);
  float sub(float, float);
  float multiply(float, float);
  float divide(float, float);
};
float normal_calc::add(float a, float b) { return (a + b); }
float normal_calc::sub(float a, float b) { return (a - b); }
float normal_calc::multiply(float a, float b) { return (a * b); }
float normal_calc::divide(float a, float b) { return (a / b); }

// In the below fucntions all the trigonometric fucntion tages input in the form
// of radian angles and not ddirectly in the form of degree angles.
class scientific_calc {
public:
  float sin_result(float);
  float cos_result(float);
  float tan_result(float);
  float sqrt_result(float);
  float cubert_result(float);
};
// to define the above functions

float scientific_calc ::sin_result(float a) {
  // degree = PI * a / 180;
  return sin((PI * a) / 180);
}

float scientific_calc::cos_result(float a) { return cos((PI * a) / 180); }
float scientific_calc::tan_result(float a) { return tan((PI * a) / 180); }
float scientific_calc::sqrt_result(float a) { return sqrt(a); }
float scientific_calc::cubert_result(float a) { return cbrt(a); }

class calc : public normal_calc, public scientific_calc {
public:
  void Display(float a, float b, char d) {
    switch (d) {
    case '+':
      cout << "The addition of numbers is " << add(a, b) << endl;
      break;
    case '-':
      cout << "The difference of numbers is " << sub(a, b) << endl;
      break;
    case '*':
      cout << "The product of both the numbers is " << multiply(a, b);
      break;
    case '/':
      cout << "The ratio of both the numbers is " << divide(a, b);
      break;
    // to write more complex function like sqrt sin tan cos function ahead;
    default:
      void Display(char op, float a);
    }
  }
  void Display(char op, float a) {
    switch (op) {
    case 't':
      cout << "The tangent of " << a << "is " << tan_result((float)a);
      break;
    case 's':
      cout << "The Sin of " << a << "is " << sin_result((float)a);
      break;
    case 'c':
      cout << "The cos of " << a << "is " << cos_result((float)a);
      break;
    case 'r':
      cout << "The root of " << a << "is " << sqrt_result((float)a);
      break;
    case '3':
      cout << "The cuberoot of " << a << "is " << cubert_result((float)a);
      break;
    default:
      cout << "Wrong operation asked, kindly ask the correct operaration"
           << endl;
    }
  }
};

int main(int argc, char *argv[]) {
  float a = 0, b = 0;
  char op;

  cout << "Following are the operaration symbol for calculator" << endl
       << "add --> + "
       << "subtract --> - "
       << "multiply --> * "
       << "divide --> / " << endl
       << "following are the scientific calulations: " << endl
       << "sin --> s "
       << "cos --> c "
       << "tan --> t "
       << "square root--> r "
       << "Cuberoot --> 3 " << endl;

  cout << "Enter which operation you want to perform " << endl;
  cin >> op;
  calc op1;
  /* if the below code is not working so trying to make a simple approach
  if (op == '+' || '-' || '*' || '/') {
    op1.Display(a, b, op);
  } else if (op == 's' || 'c' || 't' || 'r' || '3') {
    cout << "Enter the number " << endl;
    float num;
    cin >> num;
    op1.Display(op, (float)num);
  }
*/
  cout << "Do you want to do scientific calculations?(y/n): " << endl;
  char sci;
  cin >> sci;

  if (sci == 'y') {
    cout << "Enter the number: ";
    float num;
    cin >> num;
    op1.Display(op, (float)num);
  } else if (sci == 'n') {
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    op1.Display(a, b, op);
  } else {
    cout << "Kindly choose the correct operation to perform" << endl;
  }

  // cout << "The sin value is " << op1.sin_result((float)90) << endl;
  return 0;
}
