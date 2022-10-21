/* 1. Write a function to swap two numbers using call by reference. */
// Passing by reference using pointers
#include <iostream>
using namespace std;

// function definition to swap numbers
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main()
{
// initialize and input variables
    int a, b;
    cin >> a >> b;
    cout << "Before Swapping: " << a << " " << b << endl;

// call function by passing variable addresses
    swap(&a, &b);
    cout << "After Swapping: " << a << " " << b << endl;

    return 0;
}