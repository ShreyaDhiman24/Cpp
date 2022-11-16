#include <iostream>
#include <fstream>
using namespace std;

class item
{
    string name;
    float price;
    int qty;

public:
    item(string n, float p, int q)
    {
        name = n;
        price = p;
        qty = q;
    }
    friend ofstream &operator<<(ofstream &ofs, item &i);
    friend ifstream &operator>>(ifstream &ifs, item &i);
    friend ostream &operator<<(ostream &out, item &i);
    friend istream &operator>>(istream &in, item &i);
};
ofstream &operator<<(ofstream &ofs, item &i)
{
    ofs << i.name << endl
        << i.price << endl
        << i.qty << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, item &i)
{
    ifs >> i.name >> i.price >> i.qty;
    return ifs;
}
ostream &operator<<(ostream &out, item &i)
{
    out << i.name << endl
        << i.price << endl
        << i.qty << endl;
    return out;
}
istream &operator>>(istream &in, item &i)
{
    in >> i.name >> i.price >> i.qty;
    return in;
}

int main()
{
    int n;
    string name;
    float price;
    int qty;

    cout << "number of items: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        item i1(name, price, qty);
        cin >> i1;

        // storing items in file
        ofstream ofs("my.txt", ios::trunc);
        ofs << i1;
        ofs.close();

        ifstream ifs("my.txt");
        ifs >> i1;
        cout << i1;
    }
}
