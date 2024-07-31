#include <iostream>
using namespace std;
int main() {
    int r, c, i, j;       //user defined sizes and loop variables.

    cout<<"\nMATRIX SUBTRACTION\nEnter the number of rows in your matrices:";
    cin>>r;
    cout<<"\nEnter the number of columns:";
    cin>>c;
    int matrix1[r][c];
    int matrix2[r][c];
    //inputting the matrices
    cout<<"\nEnter the elements of your matrix, row-wise.\n";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"\nEnter the elements of the second matrix, also row-wise.\n";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin>>matrix2[i][j];
        }
    }
    //displaying input matrices
    cout<<"\nFirst matrix: \n";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nSecond matrix: \n";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<"\n";
    }

    int difference[r][c];
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    //printing sum:
    cout<<"\nSum of the two matrices:\n";
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<difference[i][j]<<" ";
        }
        cout<<"\n";
    }
}