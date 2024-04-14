#include<iostream>
#include<time.h>
using namespace std;
int main(){
    srand(time(NULL));
    cout<<"One random number:\n";
    int full_random =rand();//there is %6, hence remainder <6. Then the +1 to avoid 0 and include 6. retard.
    cout<<full_random;
    cout<<"\nThree 6 sided dies rolled:\n";
    for(int i=1; i<=3;i++) {
        int x = (rand() % 6) + 1;
        cout<<x<<"\n";
    }//yay this is cool
}