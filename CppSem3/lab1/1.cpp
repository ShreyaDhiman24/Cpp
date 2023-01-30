/*Q1. Write a program to enter a character annd determine whether it is a vowel or not, using the switch...case construct. */
#include <iostream>
using namespace std;

int main()
{
// Declaration of a character variable and taking input from the user
    char a;
    cin >> a;

// Switch..case statements to determine whether the enterd charcter is vowel or not
    switch (a)
    {
    case 'a':
        cout << "Vowel" << endl;
        break;
    case 'e':
        cout << "Vowel" << endl;
        break;
    case 'i':
        cout << "Vowel" << endl;
        break;
    case 'o':
        cout << "Vowel" << endl;
        break;
    case 'u':
        cout << "Vowel" << endl;
        break;
    case 'A':
        cout << "Vowel" << endl;
        break;
    case 'E':
        cout << "Vowel" << endl;
        break;
    case 'I':
        cout << "Vowel" << endl;
        break;
    case 'O':
        cout << "Vowel" << endl;
        break;
    case 'U':
        cout << "Vowel" << endl;
        break;

// If none of the above cases works prints default statement i.e "it is not a vowel"
    default:
        cout << "Not Vowel. It's a Consonant" << endl;
        break;
    }
    return 0;
}