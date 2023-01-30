/* 2. Write a program in C to read n number of values in an array and display the first m values in reverse order. All the access of array must be done using pointers only. */

#include <iostream>
using namespace std;

// Function to swap two memory contents
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to reverse the array through pointers
void reverse(int arr[], int m)
{

    // pointer1 pointing at the beginning of the array
    int *start = arr;

    // pointer2 pointing at end of the array
    int *end = arr + m - 1;
    while (start < end)
    {
        swap(start, end);
        start++;
        end--;
    }
}

// Function to print the array
void print(int *arr, int n)
{

    // Length pointing at end of the array
    int *length = arr + n,

        // Position pointing to the beginning of the array
        *position = arr;
    cout << "Array = ";
    for (position = arr; position < length; position++)
        cout << *position << " ";
}

// Driver function
int main()
{

    // Taking array size from the user
    int n;
    cin >> n;

    // Taking array elements from the user
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Elements to be printed
    int m;
    cin >> m;

    cout << "Original ";
    print(arr, n);

    cout << "\nReverse ";
    reverse(arr, m);
    print(arr, m);
    return 0;
}
