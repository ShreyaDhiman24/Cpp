#include <iostream>
using namespace std;

class rectangle{
public:
int l;
int b;
int area(){
    return l*b;
}
int peri(){
    return 2*(l+b);
}
};

int main()
{
    
    rectangle *ptr = new rectangle;
    // ptr= &r1;
    ptr -> l =10;
    ptr -> b =5;
    
    cout<<ptr -> area()<<endl;
    cout<<ptr -> peri();
    return 0;
}