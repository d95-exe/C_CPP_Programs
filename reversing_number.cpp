#include<iostream>
using namespace std;

int reverser(int num){
    int reversed=0;
    while(num != 0){
        int digit = num%10;
        reversed = reversed*10 + digit;
        num = num/10;
    }
    return reversed;
}

int main(){
    int ip, op;
    cout<<"NUMBER REVERSER\nGIVE ME A NUMBER, AND I SHALL REVERSE IT.\nEnter a number:\n";
    cin>>ip;
    op = reverser(ip);
    cout<<"\nReversed, that's:\n"<<op;
}
//♥