#include<iostream>
using namespace std;
int main(){
    int a,i,j;
    cout<<"Right tilt Pyramid Printer";
    cout<<"\n(because this is the best usage of all this computing power)";
    cout<<"\nHow many steps do you want?";
    cin>>a;

    for(i = 1; i <= a; i++) {
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

