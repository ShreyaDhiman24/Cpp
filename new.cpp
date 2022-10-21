#include <iostream>
using namespace std;
class DM
{
public:
    float meter;
    void getdata()
    {
        cout << "Enter distance in meters and centimeters: ";
        cin >> meter;
    }
    friend void add();
} a1;

class DB
{
public:
    float inch;
    void getdata()
    {
        cout << "Enter distance in feets and inches: ";
        cin >> inch;
    }
    friend void add();
} a2;

void add()
{
    float a, res;
    a = a1.meter * 39.37;
    res = a + a2.inch;
    cout << " Total inches: " << res << endl;
    a = a2.inch / 39.37;
    res = a + a1.meter;
    cout << " Total meters: " << res << endl;
}
main()
{
    a1.getdata();
    a2.getdata();
    add();
    return 0;
}
