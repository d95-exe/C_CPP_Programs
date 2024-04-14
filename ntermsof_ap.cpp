#include<iostream>
using namespace std;
int main(){
    //printing an AP to n terms;
    int a1, n, d, nexterm, sum;
    //nth term = a1+(n-1)d
    cout<<"ARITHMETIC PROGRESSION PRINTER";
    cout<<"\nEnter the no. of terms:";
    cin>>n;
    cout<<"Enter the first term of the A.P. :";
    cin>>a1;
    cout<<"Enter the common difference:";
    cin>>d;
    cout<<"The A.P. is:";
    cout<<"\n"<<a1;
    sum = a1;
    for(int i=2; i<=n; i++){
        nexterm = nexterm+d;
        cout<<", "<<nexterm;
        sum += nexterm;
    }
    cout<<"\nSum of the series is:";
    cout<<sum;
    return 0;
}