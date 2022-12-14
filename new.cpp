#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Taking vector array input from user
    int size;
    cin >> size;

    vector<int> nums;

    for (int i = 1; i <= size; i++)
    {
        nums.push_back(i);
    }

    // Input target value
    int target;
    cout << "Target: ";
    cin >> target;

    // Logic
    int flag = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "[" << i << "," << j << "]" << endl;
                flag = 1;
            }
        }
    }

    if (flag == 0)
    {
        cout << "not found" << endl;
    }

    return 0;
}
