#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Greater of two";
    cout<<"\nNumber 1: ";
    cin>>a;
    cout<<"\nNumber 2: ";
    cin>>b;
    if(a>b){
        cout<<"\n"<<a<<" is greater.";
    }else{
        cout<<"\n"<<b<<" is greater.";
    }
    return 0;
}