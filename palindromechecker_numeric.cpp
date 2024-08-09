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

int main() {
    int ip, op;
    cout << "NUMERIC PALINDROME CHECKER\nEnter a number:\n";
    cin >> ip;
    op = reverser(ip);
    if (ip == op) {
        cout << "\nThe entered string is a palindrome.";
    } else {
        cout << "\nThe entered string is not a palindrome.";
    }
}