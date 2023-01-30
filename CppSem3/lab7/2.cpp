#include <iostream>
using namespace std;
//Base class
class BaseClass{
public:
int var_base;

//Function to display the base class members
void display(){
cout<<"Displaying base class variables var_base: "<<var_base<<endl;
}
};

// class derived from base class
class DerivedClass : public BaseClass{
    public: int var_derived;
    //Function to display the base and derived class members
    void display(){
        cout<<"Displaying Base class variable var_base: "<<var_base<<endl;
        cout<<"Dispaling Derived class variables var_derived: "<<var_derived<<endl;
    }
};

int main()
{
    //Pointer to base class
    BaseClass* baseClassPointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

//Pointing to derived class 
cout<<"Base class: "<<endl;
baseClassPointer = &obj_derived;

baseClassPointer-> var_base=12;
baseClassPointer->display(); //Calling base class member function

baseClassPointer-> var_base=37;
baseClassPointer->display();

cout<<"\nDerived class: "<<endl;
DerivedClass* derivedClassPointer;
derivedClassPointer = &obj_derived;
derivedClassPointer->var_base=23;
derivedClassPointer->var_derived=99;
derivedClassPointer->display();
return 0;
}