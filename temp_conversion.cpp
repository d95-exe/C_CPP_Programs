#include<iostream>
using namespace std;
int main(){
    float c, f, f_ans, c_ans;
    int x;
    cout<<"TEMPERATURE CONVERTER";
    cout<<"\nEnter operation number:";
    cout<<"\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n";
    cin>>x;
    switch(x){
        case 1:
            cout<<"\nEnter Temperature in Celsius:";
            cin>>c;
            f_ans = (c*1.9)+32;
            cout<<"Temperature in Fahrenheit is: "<<f_ans;
            break;
        case 2:
            cout<<"\nEnter Temperature in Fahrenheit:";
            cin>>f;
            c_ans =(f-32)*0.55;
            cout<<"Temparature in Celsius is: "<<c_ans;
            break;
        default:
            cout<<"Invalid inputs. Try again.";
            break;
    }
    return 0;
}
//Add kelvin?