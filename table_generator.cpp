#include<iostream>
using namespace std;
int main(){
    int a,b,i;
    cout<<"MULTIPLICATION TABLE GENERATOR";
    cout<<"\nEnter No.to generate Table:";
    cin>>a;
    cout<<"\nHow many multiples of "<<a<<" do you want: ";
    cin>>b;

    for(i=1;i<=b;i++){
        cout<<"\n"<<a<<" * "<<i<<" = "<<a*i;
    }
    return 0;
}