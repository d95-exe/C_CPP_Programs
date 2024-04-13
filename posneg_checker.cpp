#include<iostream>
using namespace std;
int main() {
    int a;
    cout << "POSITIVE OR NEGATIVE?";
    cout << "\nEnter a number to be checked: ";
    cin >> a;
    if (a != 0) {
        if (a > 0) {
            cout << a << " is Positive.";
        } else {
            cout << a << " is Negative.";
        }
        return 0;
    }
    if (a == 0) {
        cout << "\nZero is zero. Try again.";
    }
}