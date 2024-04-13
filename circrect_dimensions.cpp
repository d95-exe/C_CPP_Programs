#include <iostream>
using namespace std;
int main(){
    int r,l,b;
    cout<<"CIRCLES AND RECTANGLES\nAREA AND PERIMETER CALCULATOR";
    cout<<"\nEnter Radius of circle: ";
    cin>>r;
    cout<<"\nEnter Length of rectangle: ";
    cin>>l;
    cout<<"\nEnter Breadth of rectangle: ";
    cin>>b;
    cout<<"\n\tArea of circle: "<<3.14*r*r;
    cout<<"\n\tPerimeter of cirlce: "<<2*3.14*r;
    cout<<"\n\tArea of Rectangle: "<<l*b;
    cout<<"\n\tPerimeter of Rectangle: "<<2*(l+b);
    return 0;
}