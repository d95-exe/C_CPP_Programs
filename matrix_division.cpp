#include <iostream>
using namespace std;
int main() {
    int r, c, i, j;       //user defined sizes and loop variables.

    cout<<"\nMATRIX DIVISION\nPLEASE ENSURE:\nOrder of matrices must be equal.\nUSE WHOLE NUMBERS ONLY\nEnter the number of rows:";
    cin>>r;
    cout<<"\nEnter the number of columns in the matrix:";
    cin>>c;
    int m1[r][c];
    int m2[r][c];

    cout<<"\nEnter the elements of first matrix, row-wise:\n";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin>>m1[i][j];
        }
    }
    cout<<"\nEnter the elements of Second matrix, row-wise:\n";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin>>m2[i][j];
        }
    }
    //printiing input matrices:
    cout<<"\nIntended calculation:\n";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"^ this divided by this v\n";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<m2[i][j]<<" ";
        }
        cout<<"\n";
    }

    int quotient[r][c];
    for(i=0; i<r; i++){
        for(j=0; j<c; j++) {
            quotient[i][j] = 0;
            for (int k = 0; k < r; k++) {
                quotient[i][j] = m1[i][k] / m2[k][j];
            }
        }
    }

    //printing sum:
    cout<<"\nQuotient of the two matrices:\n";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<quotient[i][j]<<" ";
        }
        cout<<"\n";
    }
}