#include <iostream>
using namespace std;

template <class T> // Declaration of template

// Function for linear search
T linear(T a[], int n, T key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// Main Function
int main()
{

    int a[10] = {6, 43, 23, 6, 12, 43, 3, 4, 2, 6}; // Declarartion of Integer array

    cout << "Integer array elements: ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " "; // Displaying Integer array
    }

    int k;
    cout << "\nEnter key element to be searched: "; // Taking key element
    cin >> k;

    // Printing result
    int index = linear(a, 10, k); // Calling function for Integer array

    if (index != -1)
        cout << k << " is present in the array at position " << index << endl;
    else
        cout << k << " is not present in the array \n"
             << endl;

    cout
        << "-----------------------------------------------" << endl;

    char c[8] = {'A', 'v', 'D', 'R', 'T', 'u', 'j', 'o'}; // Declarartion of Character array

    cout << "Character array elements: ";
    for (int i = 0; i < 8; i++)
    {
        cout << c[i] << " "; // Displaying Character array
    }
    char x;
    cout << "\nEnter key element to be searched: "; // Taking key element
    cin >> x;

    // Printing result
    index = linear(c, 8, x); // Calling same function but for Character array

    if (index != -1)
        cout << x << " is present in the array at position " << index << endl;
    else
        cout << x << " is not present in the array \n"
             << endl;
    return 0;
}