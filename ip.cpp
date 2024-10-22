#include <iostream>

using namespace std;

int main() {

    int matrix1[3][3], matrix2[3][3], difference[3][3];
    int i, j;

    // Input for first matrix
    cout << "Enter elements of first matrix:" << endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input for second matrix
    cout <<"Enter elements of second matrix:" << endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cin >> matrix2[i][j];
        }
    }

    // subtracting the matrices
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Displaying the difference matrix
    cout << "Difference of the matrices:" << endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cout << difference[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// program to subtract two matrices