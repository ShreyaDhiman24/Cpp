/*Q4. Using a do while loop, write a program in C to display all the leap years from 1800 to 2000.*/
#include <iostream>
using namespace std;
int main()
{
    int start = 0; // Here start = 1800
    int end = 0;   // & end = 2000
    cin >> start >> end;
    int year = start;
    do
    {
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        {
            cout << year << endl;
        }
        year++;
    } while (year <= end);

    return 0;
}