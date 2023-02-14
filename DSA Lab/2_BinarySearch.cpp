#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int beg, int last, int x)
{
    while (beg <= last)
    {
        int mid = (beg + last) / 2;

        // if x is present at mid
        if (arr[mid] == x)
        {
            return mid;
        }
        // If x greater, ignore left half
        if (arr[mid] < x)
        {
            beg = mid + 1;
        }
        // If x is smaller, ignore right half
        else
        {
            last = mid - 1;
        }
    }
    // if element was not present
    return -1;
}

int deleteItem(int *arr, int n, int item)
{
    for (int i = 0; i < n; i++)
    {
        // search item in array
        if (arr[i] == item)
        {
            break;
        }
        // if found
        if (i < n)
        {
            n = n - 1;
            for (int j = 0; j < n; j++)
            {
                arr[j] = arr[j + 1]; // reduce size of array and move all elements on space ahead
            }
        }
        return n;
    }
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements of array in sorted form: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Element to be searched: ";
    cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;

    return 0;
}
