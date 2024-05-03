#include<iostream>
using namespace std;
int main(){
    string input;
    int x, i;
    cout<<"\nSTRING REVERSER\nGIVE MEh A WORD, AND I SHALL REVERSE IT\nEnter the word:\n";
    cin>>input;
    x = input.length();
    cout<<"\nReversed, that's:\n";
    for(i=x; i>=0; i--){
        cout<<input[i];
    }
}