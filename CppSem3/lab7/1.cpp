#include <iostream>
using namespace std;

// first base class 
class Vehicle{
    public :
        Vehicle(){
            cout << "This is a Vehicle." << endl;
}
};
// second base class 
class FourWheeler{
    public :
        FourWheeler(){
            cout << "This is a 4-wheeler vehicle." << endl;
}
};

// sub class derived from a single base class: Single Inheritance
class CarS : public Vehicle{
};
// sub class derived from two base classes: Multiple Inheritance
class CarM : public Vehicle, public FourWheeler{
};
// Multilevel Inheritance
// first sub class derived from base class Vehicle
class TwoWheeler : public Vehicle{
    public: TwoWheeler(){
        cout<<"This is a 2-wheeler vehicle."<<endl;
    }
};
//sub class deriver from the derived base class TwoWheeler
class Bike : public TwoWheeler {
    public: Bike(){
cout<<"Bike has two wheels."<<endl;
    }
};

// Heirarchical Inheritance
// more than one subclass is inherited from a single base class Vehicle

// first sub class
class Bus : public Vehicle{
    public: Bus(){
        cout<<"Bus is a vehicle."<<endl;
    }
};
// second sub class
class Truck : public Vehicle{
    public: Truck(){
        cout<<"Truck is a vehicle."<<endl;
    }
};
int main()
{
// creating object of sub class will invoke the constructor of base classes
cout<<"a) Single Inheritance"<<endl;
CarS objS; 
cout<<"\nb) Multiple Inheritance"<<endl;
CarM objM; 
cout<<"\nc) Multilevel Inheritance"<<endl;
Bike obj;
cout<<"\nd) Hierarchical Inheritance"<<endl;
cout<<"~First sub class:"<<endl;
Bus objB;
cout<<"\n~Second sub class:"<<endl;
Truck objT;
    return 0;
}