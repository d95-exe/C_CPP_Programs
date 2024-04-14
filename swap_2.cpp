#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"TWO-NUMBER SWAPPER";
    cout<<"\nEnter two numbers: ";
    cout<<"\nNumber #1:";
    cin>>a;
    cout<<"Number #2:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"\nHere are the swapped numbers:\n";
    cout<<"Number #1:"<<a<<"\n";
    cout<<"Number #2:"<<b;
}