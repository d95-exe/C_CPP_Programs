#include<iostream>
using namespace std;
int main() {
    cout << "\nEnter 5 numbers";
    cout << "\nGREATEST OF 5";
    int a[5];
    for(int i=0; i<5; i++){
     cout<<"\nNumber "<<i+1<<": ";
     cin>>a[i];
    }
    int max =0;
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max<<" is the largest of the 5.";
    return 0;
}

//add case for equal numbers added.