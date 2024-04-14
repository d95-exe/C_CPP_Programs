#include<iostream>
using namespace std;
int main(){
    int a,i,j;
    cout<<"LEFT TILT PYRAMID PRINTER";
    cout<<"\n(because this is the best usage of all this computing power)";
    cout<<"\nHow many steps do you want?";
    cin>>a;
    for(i=a; i>=1;i--){
        for(j=1;j<=1;j++){//changing j<=i to j<=1 makes it the slant program
            cout<<" ";
        }
        for(j=a;j>=i;j--){
            cout<<"* ";
        }
        cout<<"\n";
    };
    return 0;
}