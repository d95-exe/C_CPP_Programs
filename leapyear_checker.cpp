#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"LEAP YEAR CHECKER\nBecause it's more complicated than you think.";
    cout<<"\nEnter a year:";
    cin>>a;
    if(a%400==0 || (a%4==0 && a%100!=0) ){
        cout<<"\n"<<a<<" is a leap year";
    }else{
        cout<<"\n"<<a<<" is not a leap year";
    }
    return 0;
}