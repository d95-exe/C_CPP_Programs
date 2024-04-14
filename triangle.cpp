#include<iostream>
using namespace std;
int main(){
    int a,i,j;
    cout<<"Pyramid Printer";
    cout<<"\n(because this is the best usage of all this computing power)";
    cout<<"\nHow many steps do you want?";
    cin>>a;

    for(i = a; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout<<" ";
        }
        for (j = a; j >= i; j--) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}