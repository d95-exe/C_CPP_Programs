#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2, i, j;       //user defined sizes and loop variables.

    cout<<"\nMATRIX MULTIPLICATION\nPLEASE ENSURE:\nNumber of rows in one matrix must be equal to columns in the other.\nEnter the number of rows in the first matrix:";
    cin>>r1;
    cout<<"\nEnter the number of columns in the first matrix:";
    cin>>c1;
    r2 = c1;
    c2 = r1;
    int m1[r1][c1];
    int m2[r2][c2];

    //inputting the matrices
    cout<<"\nEnter the elements of your matrix, row-wise.\n";
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            cin>>m1[i][j];
        }
    }
    cout<<"\nEnter the elements of the second matrix, also row-wise.\n";
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            cin>>m2[i][j];
        }
    }
    //displaying input matrices
    cout<<"\nFirst matrix: \n";
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nSecond matrix: \n";
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            cout<<m2[i][j]<<" ";
        }
        cout<<"\n";
    }
    //calculating product
    int product[r1][c2];
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < r2; k++) { //r2 must equal c1
                product[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    //printing sum:
    cout<<"\nProduct of the two matrices:\n";
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            cout<<product[i][j]<<" ";
        }
        cout<<"\n";
    }
}