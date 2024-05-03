#include<iostream>
using namespace std;
bool checkPalindrome ( string s )
{
    int n = s.length();
    for ( int i = 0; i <= n/2; i++ )
    {
        if ( s[i] != s[n-1-i] )
            return false;
    }
    return true;
}
int main(){
    string s;
    cout<<"\nEnter a string to check if it's a palindrome:\n";
    getline(cin, s);
    if(checkPalindrome(s) == 1){
        cout<<"\nEntered string is a palindrome.";
    }else{
        cout<<"\nEntered string is not a palindrome";
    }
}