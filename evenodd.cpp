#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"EVEN OR ODD";
    cout<<"\nEnter a number to check if it is even or odd.";
    cin>>a;
    if(a%2==0){
        cout<<a<<" is even.";
    }else{
        cout<<a<<" is odd.";
    }
    return 0;
}