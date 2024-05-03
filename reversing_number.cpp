#include<iostream>
using namespace std;
int main(){
    int x,l;
    cout<<"NUMBER REVERSER\nGIVE ME A NUMBER, AND I SHALL REVERSE IT.\nEnter a number:\n";
    cin>>x;
    string str_x = to_string(x);//converted to string
    l = str_x.length();         //finds length of string
    cout<<"\nLength of input: "<<l;
    cout<<"\nReversed, that's:\n";
    for(int i=l-1; i>=0; i++){//uses that length as base to output number in reverse order.
        cout<<str_x[i];
    }
}
//♥