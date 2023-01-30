#include <iostream>
using namespace std;

class coordinate{
    int x,y,z;
    public: 
    void getdata(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }
    void display(){
        cout<<"\tx="<<x<<" y="<<y<<" z="<<z<<"\n";
    }
    friend coordinate operator++(coordinate);
    friend coordinate operator--(coordinate);
	friend coordinate operator+=(coordinate,coordinate);
	friend coordinate operator==(coordinate, coordinate);
};
coordinate operator==(coordinate a, coordinate b){
    if(a.x==b.x || a.y==b.y || a.z==b.z){
        cout<<"\nBoth coordinates are same. Coordinates are:\n";
        a.display();
    }
    else{
cout<<"\n~Both coordinates are not same, coordinates are:\n";
		a.display();
		b.display();
    }
}
coordinate operator++(coordinate a)
{
	a.x=a.x+1;
	a.y=a.y+1;
	a.z=a.z+1;
	return a;
}
coordinate operator--(coordinate a)
{
	a.x=a.x-1;
	a.y=a.y-1;
	a.z=a.z-1;
	return a;
}
coordinate operator+=(coordinate a,coordinate b)
{
	a.x=a.x+b.x;
	a.y=a.y+b.y;
	a.z=a.z+b.z;
	return a;
}

int main()
{
    coordinate a;
	a.getdata(8,3,19);
    cout<<"First coordinates:\n";
	a.display();
	coordinate b;
	b.getdata(7,13,17);
	cout<<"\nSecond cordinates:\n";
	b.display();
    a=++a;
    cout<<"\nIncremented first coordinates, now first coordinates:\n";
	a.display();
    a=--a;
    cout<<"\nDecremented first coordinates, now first coordinates:\n";
	a.display();
	a=a+=b;
	cout<<"\nAddition of first and second coordinates:\n";
	a.display();
	cout<<"\nResult of comparision of first and secod cordinate:\n";
	a==b;
    
    
    return 0;
}