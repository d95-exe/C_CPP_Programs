#include <iostream>
using namespace std;
int main(){
    string cars[][3] = {{"Cayman","Macan","Panamera"},
                        {"Camaro","Corvette","Silverado"},
                        {"R8","TTRS","RSQ8"},
                        {"GTB","Testarossa","Superfast"}};

    int row = sizeof(cars)/ sizeof(cars[0]);
    int column = sizeof(cars[0])/ sizeof(cars[0][0]);

    for (int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<cars[i][j]<<" ";
        }
        cout<<"\n";
    }
}