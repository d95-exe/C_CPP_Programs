#include "iostream"
using namespace std;

int luhn(unsigned long long a){
    int sum = 0;
    int second = 0;
    int buffer = 0;

    while(a){
        buffer = a%10;
        if(second) buffer*=2;

        sum+= buffer/10;
        sum+= buffer%10;

        a/=10;
        second= 1 - second;
    }
    if (sum%10) return 1;
    return 0;
}

int main(){
    unsigned long long a;
    bool stat = false;
    char getstat;
    cout<<"\nLuhn Algorithm Validator V2\nNEW AND IMPROVED";
    do{
        cout<<"\nEnter a card number: ";
        cin >> a;
        if(luhn(a) == 0){
            cout<<"\nCard number is valid.";
        }else{
            cout<<"\nCard number is invalid.";
        }
        cout<<"\nDo you wish to check another number? y/n:\n";
        cin>>getstat;
        if(getstat == 'y'){
            stat = true;
        }else{
            cout<<"\nSee you again!";
            stat = false;
        }
    }while(stat);
}
