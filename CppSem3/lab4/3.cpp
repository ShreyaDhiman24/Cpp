#include <iostream>
using namespace std;

/* CONCEPT:
  Inlining is only a request to the compiler, not a command. Compiler can ignore the request for inlining. Compiler may not perform inlining in such circumstances like:
1) If a function contains a loop. (for, while, do-while)
2) If a function contains static variables.
3) If a function is recursive.
4) If a function return type is other than void, and the return statement doesn’t exist in function body.
5) If a function contains switch or goto statement.
  Many inline functions then the size of the binary executable file will be large, because of the duplication of same code.
  */

// Declaration of class
class inlineFunc
{
public:
  inline float mul(float x, float y)
  {
// Declaring static functions and for loop
    static int k;
    for (int i = 0; i < 100; i++)
      k++;

    return (x * y);
  }
  inline float cube(float x)
  {
    return (x * x * x);
  }
};

int main()
{
  // Declaring and taking input of variables
  int a, b;
  cin >> a >> b;

  // Declaring class object
  inlineFunc obj;

  //  Call the multiplication and cubic functions using class objects
  cout << "Multiplication value: " << obj.mul(a, b) << endl;
  cout << "Cube of first number: " << obj.cube(a) << endl
       << "Cube of second number: " << obj.cube(b) << endl;

  return 0;
}