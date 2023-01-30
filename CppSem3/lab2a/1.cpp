/* 1. Write a C program to read a square matrix and find the sum of diagonal for the given matrix. Declare the square matrix dynamically using pointers. Write a separate function to find the sum and pass the matrix to this function. Print the sum in main function. */

#include <iostream>
using namespace std;

int sum(int **arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i]; //Sum of diagonal elements
    }

    return sum;
}

int main()
{
//taking size of matrix
    int n;
    cin >> n; 

    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
//taking matrix as input from user
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
//Printing sum of diagonals (by calling "sum" function)
    cout << sum(arr, n)<<endl;
    return 0;
}
