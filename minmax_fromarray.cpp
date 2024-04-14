#include<iostream>
using namespace std;
int main(){
    int a[5];
    cout<<"EXTREMES OF 5";
    cout<<"\nEnter 5 integers:\n";
    for(int i=0; i<=4; i++){
        cin>>a[i];
    }
    int max = a[0];
    int min = a[0];
    for(int i=0; i<=4; i++){
        max = (max<a[i])?a[i]:max;
        min = (min>a[i])?a[i]:min;
    }
    cout<<"\n"<<max<<" is the largest of the inputs.";
    cout<<"\n"<<min<<" is the smallest of the inputs.";
    return 0;
}
