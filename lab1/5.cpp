/*Q5. Write a program using a loop to display the following pattern.
A
AB
ABC
ABCD
ABCDE
ABCD
ABC
AB
A
(Hint: You may need more than I loop for this!)*/
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n; // For given question n=5

    char ch = 'A';
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char(ch + j);
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <i; j++)
        {
            cout << char(ch + j);
        }
        cout << endl;
    }

    return 0;
}
