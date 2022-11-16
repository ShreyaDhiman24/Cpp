#include <iostream>
using namespace std;

int main()
{
    // Taking array input from user
    int size;
    cin >> size;

    int nums[size];
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    // Input target value
    int target;
    cout << "Target: ";
    cin >> target;

int flag=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "[" << i << "," << j << "]" << endl;
               flag=1;
            }
        }
    }

if(flag==0){
    cout << "not found" << endl;}

    return 0;
}
