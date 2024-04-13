#include <iostream>
using namespace std;
int main(){
    int a,b;
    char x;
    cout<<"BASIC CALCULATOR";
    cout<<"\nEnter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter operator:";
    cin>>x;

    switch(x){
        case '+' :
            cout<<a<<" + "<<b<<" = "<<a+b;
            break;
        case '-' :
            cout<<a<<" - "<<b<<" = "<<a-b;
            break;
        case '*' :
            cout<<a<<" * "<<b<<" = "<<a*b;
            break;
        case '/' :
            cout<<a<<" / "<<b<<" = "<<a/b;
            break;
        case '%':
            cout<<a<<" % "<<b<<" = "<<a%b;
            break;
        default:
            break;
    }
    return 0;
}