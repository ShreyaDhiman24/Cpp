#include <iostream>

class coordinate
{
	int x,y,z;
	public:
		void getdata(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<"\tx="<<x<<" y="<<y<<" z="<<z<<"\n";
		}
		friend coordinate operator++(coordinate);
		friend coordinate operator+=(coordinate,coordinate);
		friend coordinate operator==(coordinate, coordinate);
};
coordinate operator==(coordinate a, coordinate b)
{
	if(a.x==b.x || a.y==b.y || a.z==b.z)
	{
	      cout<<"\nboth coordinates are same.coordinates are=\n";
	      a.display();
	}
	else
	{
		cout<<"\n\tboth coordinates are not same, coordinates are=\n";
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
coordinate operator+=(coordinate a,coordinate b)
{
	a.x=a.x+b.x;
	a.y=a.y+b.y;
	a.z=a.z+b.z;
	return a;
}
int main()
{
	clrscr();

	coordinate a;
	a.getdata(8,3,19);
	cout<<"first coordinates=\n";
	a.display();
	coordinate b;
	b.getdata(7,13,17);
	cout<<"\nsecond cordinates=\n";
	b.display();
	a=a++;
	cout<<"\nincreamented first coordinates, now first coordinate is=\n";
	a.display();
	a=a+=b;
	cout<<"\naddition of first and second coordinates is=\n";
	a.display();
	cout<<"\nresult of comparision of first and secod cordinate=\n";
	a==b;


	getch();
	return 0;
}
