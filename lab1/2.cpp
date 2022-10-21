/*Q2. Write a program using while loop to enter a character and continue entering until a consonant is encountered. Further,
display the number of times each of the characters entered.*/
#include <iostream>
using namespace std;

int main()
{
// Declaration of a character variable
    char c;

// Initialising vowel characters
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;

// Entering character using "While loop" until the condition satisfies
    while (1)
    {
        cin >> c;
        if (c == 'a' || c == 'A')
        {
            a++;   // Increment number of 'a' by 1
        }
        else if (c == 'e' || c == 'E')
        {
            e++;   // Increment number of 'e' by 1
        }
        else if (c == 'i' || c == 'I')
        {
            i++;   // Increment number of 'i' by 1
        }
        else if (c == 'o' || c == 'O')
        {
            o++;   // Increment number of 'o' by 1
        }
        else if (c == 'u' || c == 'U')
        {
            u++;   // Increment number of 'u' by 1
        }
        else
        {
            break;  // Break the loop if consonant is encountered
        }
    }

//  Displaying number of times each character entered

    cout << "No. of times 'a' entered: " << a << endl;
    cout << "No. of times 'e' entered: " << e << endl;
    cout << "No. of times 'i' entered: " << i << endl;
    cout << "No. of times 'o' entered: " << o << endl;
    cout << "No. of times 'u' entered: " << u << endl;

    return 0;
}