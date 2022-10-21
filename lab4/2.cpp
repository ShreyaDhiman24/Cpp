/* 2. Write a function to find the multiplication values and cubic values using inline functions.*/

#include <iostream>
using namespace std;

// Declaration of class
class inlineFunc
{
  // Declaring and defining the inline functions for multiplication and cube
public:
  inline float mul(float x, float y)
  {
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