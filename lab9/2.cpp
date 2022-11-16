#include <iostream>
using namespace std;

// Function for division of two numbers
float division(float a, float b)
{
    if (b == 0)
        throw 1; //throws exception if divided by zero & executes catch block
    return a / b; //else return result of division
}

int main()
{
// Input from user
    float x, y;
    cout << "Enter numbers to be divided: ";
    cin >> x >> y;

// try block executes if function does not throws exception
    try
    {
        cout << division(x, y) << endl;
    }
    
// catch block executes if function throws exception
    catch (int e)
    {
        cout << "Division by 0 is not possible. " << endl
             << "Error code: " << e << endl;
    }
    return 0;
}
