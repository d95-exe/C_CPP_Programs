#include<iostream>
using namespace std;
int main(){
    string word;
    cout<<"\nPalindrome Checker\nEnter a word to check if it's a palindrome:\n";
    cin>>word;
    int size = word.size();
    char drow[size];
    for(int i=size-1; i>=0; i--){
        drow[size - 1 - i] = word[i];
    }
    if(word == drow){
        cout<<"\nThe entered string is a palindrome.";
    }
    else{
        cout<<"\nThe entered string is not a palindrome.";
    }
}
