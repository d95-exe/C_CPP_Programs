#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    cout<<"Hello world";
    Sleep(500);
    cout<<"\nbut cooler\n";
    cout<<"\n#1\n";
    char message[20] = "Hello World!";
    for(int i = 0; i<20;i++){
        cout<<message[i];
        Sleep(250);
    }
}