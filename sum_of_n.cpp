#include<iostream>
using namespace std;
int main(){
    int x,ans=0;
    cout<<"SUM TO N NUMBERS";
    cout<<"\nEnter a number to add all numbers before it to it:";
    cin>>x;
    for(int i = 1; i <= x; i++){
        ans = ans+i;
    }
    cout<<"\nSum of first "<<x<<" numbers is "<<ans;
    return 0;
}
