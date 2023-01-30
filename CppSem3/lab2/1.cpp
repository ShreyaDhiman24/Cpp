/*Demonstrate use of array in C++:*/
/*a) Write a program to perform matrix addition. Dimensions of the matrices will be entered by the user.*/
#include <iostream>
using namespace std;

int main()
{
// Input number of rows(n) and columns(m) of matrix from the user
    int n, m; 
    cin >> n >> m;

// Input matrix array 'a' and matrix array 'b' from the user using nested for loop
    int a[n][m];
    int b[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }

// Creating answer matrix = 'sum' which will be resulting matrix after addition
    int sum[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum[i][j] = a[i][j] + b[i][j]; // [sum] = [a] + [b]
        }
    }

// Printing output matrix

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
