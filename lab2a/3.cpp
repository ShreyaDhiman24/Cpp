/* Write a program to read, display and add and subtract two complex numbers using structures. Use separate functions and pointers to structure to perform the operations. */
#include <iostream>
using namespace std;

// Structure to store complex number in the form of a + bi
struct complex
{
    int real;
    int imaginary;
} a, b;

// Function to input complex number
void read(complex &a)
{
    cout<<"Enter real and imaginary part of integers to be added and subtracted:"<<endl;
    cin >> a.real >> a.imaginary;
}

// Function to display Addition of complex number
void displayAdd(complex a)
{
    cout << "Real part: " << a.real << endl;
    cout << "Imaginary part: " << a.imaginary << endl;
    cout << a.real << "+" << a.imaginary << "i" << endl;
}

// Function to display Subtraction of complex number
void displaySubtract(complex a)
{
    cout << "Real part: " << a.real << endl;
    cout << "Imaginary part: " << a.imaginary << endl;
    cout << a.real << "-" << a.imaginary << "i" << endl;
}

// ADDITION FUNCTION:
complex sum(complex a, complex b)
{
//  (A + Bi) + (C + Di) = (A+C) + (B+D)i
    complex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;
    return c;
}

// SUBTRACTION FUNCTION:
complex subtract(complex a, complex b)
{
// (A + Bi) - (C + Di) = (A+C)  (B+D)i
    complex c;
    c.real = a.real - b.real;
    c.imaginary = a.imaginary - b.imaginary;
    return c;
}

int main()
{
// calling functions: 
    read(a);
    read(b);
    displayAdd(sum(a, b));
    displaySubtract(subtract(a, b));
    return 0;
}