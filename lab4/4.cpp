/* 4. Demonstrate the use of visibility labels (public, private, protected) in classes. Use your own example for creating the class.*/

#include <iostream>
// #include <string>
using namespace std;

/*Access modifiers : used for Data Hiding
1. Public (available to everyone)
2. Private (By default: can be accessed only by the member functions inside the class --> cannot be accessed directly outside the class)
3. Protected(can be accessed by any subclass(derived class) of that class-->access through inheritance)
*/

// class definition

class Parent
{
private:
    // private data members
    int password;

    // public member function
public:
    int price(int a)
    {
        return a;
    }

    string company(string s)
    {
        return s;
    }

    void pass(int p)
    {
        password = p; // member functions can access private data member password
        cout << "(Private) Password: " << password << endl;
    }

    // protected data members
protected:
    double softwareNumber;
};

// Subclass or derived class from public base class
class Child : public Parent
{
public:
    void ID(double ID)
    {
        softwareNumber = ID; // child class is able to access the inherited protected data members of base class
        cout << "(Protected) Software number is: " << softwareNumber << endl;
    }
};

//main function
int main()
{
//Creating objects of class
    Parent mobile;
    Child mobile1; // member functions of the derived class can access the protected data members of the base class

// cout<<"Password: "<<mobile.password; // can't be accessed outside the class //PRIVATE
    mobile.pass(756443);

//accesssing public datamembers outside class
    cout << "(Public) Price: " << mobile.price(250000) << endl;     // PUBLIC
     string s = "Android";
    cout << "(Public) Company name: " << mobile.company(s) << endl; // PUBLIC

// mobile.software; //PROTECTED
    mobile1.ID(12345);

    return 0;
}