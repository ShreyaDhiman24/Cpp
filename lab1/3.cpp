/*Q3. Using for loop, write a program to read numbers until -1 is encountered. Display the count of negative, positive, and zeroes entered by the user.*/
#include <iostream>
using namespace std;
int main()
{
// Declaration of an interger variable
    int i;

// Initializing count of negative, positive and zeroes
    int n = 0;
    int p = 0;
    int z = 0;

// Reading numbers using "for loop" until condition satisfies
    for (;;)
    {
        cin >> i;
        if (i == -1)
        {
            break; // Break the loop if "-1" is encountered
        }
        else if (i > 0)
        {
            p++;  // Increment count of 'positive numbers' by 1
        }
        else if (i < 0)
        {
            n++;  // Increment count of 'negative numbers' by 1
        }
        else if (i == 0)
        {
            z++;  // Increment count of 'zeroes' by 1
        }
    }

//  Displaying count of negative, positive, and zeroes entered by the user

    cout << "Count of negative entered: " << n << endl;
    cout << "Count of positive entered: " << p << endl;
    cout << "Count of zeroes entered: " << z << endl;

    return 0;
}
