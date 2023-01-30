/*b) Write a program to perform binary search in an array.*/

#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int n, int key) // return type = integer
                                            // Taking array[], its size and key as input of fuction

{
    int start = 0;       // Initializing starting point from 0
    int end = n;         // Initializing ending point from n
    while (start <= end) // If starting point > ending point then element is not present(return -1)
    {
        int mid = (start + end) / 2; // Finding index of mid element

        // Comparing mid element with key
        if (arr[mid] == key)
        {
            return mid; // If equal, returning index of mid element
        }
        else if (arr[mid] > key)
        {
            end = mid - 1; // If key is present in first half, move end pointer to (mid - 1)
        }
        else
        {
            start = mid + 1; // If key is present in second half, shift starting pointer to (mid + 1)
        }
    }
    return -1; // If key is not found, return -1
}

int main()
{
    // Taking input of array size from the user
    int n;
    cin >> n;

    // Taking input of array elements from the user ( in sorted manner)
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Taking key (number which is to be searched in an array) as an input
    int key;
    cin >> key;

    cout << binarySearch(arr, n, key) << endl; // Calling function
    return 0;
}
