#include<iostream>
using namespace std;
int main(){
    int input, i;
    int replay = 0;
    do {
        cout<<"********PRIME OR NOT?********";
        cout<<"\nEnter a number to check if it is prime.\n";
        cin>>input;

        for(i=2; i<input; i++) {
            if (input % i == 0) {
                cout << "\nNumber is not prime.";
                break;
            }
        }
        if(i == input){
        cout<<"\nNumber is prime";
        }
        cout<<"\nPress 1 enter to check another number, press 2 and enter to quit.  \n";
        cin>>replay;
    }while(replay == 1);
    return 0;
}