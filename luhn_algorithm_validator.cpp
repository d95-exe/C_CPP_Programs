#include<iostream>
using namespace std;

int sum_one, sum_two;
void step_one(int x[], int y) {//array and it's size
    for (int i = (y - 2); i >= 0; i -= 2) {
        int temp = 2 * (x[i]);
        if (temp > 9) {
            sum_one += (temp % 10) + (temp / 10);
        } else {
            sum_one += temp;
        }
    }
}

void step_two(int x[], int y){//array and it's size
    for(int i=(y-1); i>=0; i -= 2){
        sum_two += x[i];
    }
}

void result(int a, int b){//the two sums
    int total = a+b;
    if (total % 10 == 0) {
        cout << "\nThe card number is VALID.";
    } else {
        cout << "\nThe card number is INVALID.";
    }
}

int main() {
    string intake;
    cout << "************\nLuhn Algorithm Validator\n************\nDO NOT PASTE NUMBERS, TYPE MANUALLY.\n";
    char status;
    do {
        sum_one = 0; sum_two = 0;
        cout << "Enter your card number:\n";
        cin>>intake;
        int size = intake.size();
        int number[size];
        for (int i = 0; i < size; i++) {
            int temp = intake[i] - '0';
            number[i] = temp;
        }
        step_one(number, size);
        step_two(number, size);
        result(sum_one, sum_two);

        cout << "\nDo you want to verify another number? y/n\n";
        cin >> status;
        while (status != 'y' && status != 'n') {
            cout << "Invalid input. Please enter 'y' or 'n':\n";
            cin >> status;
        }
        if (status == 'y') {
            continue;
        } else if (status == 'n') {
            cout << "\nSee you again!";
            cout << "\n************\nLuhn Algorithm Validator\n************\n";
        }
    } while (status == 'y');
}
