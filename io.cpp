#include <iostream>

using namespace std;

int main() {

    int matrix1[3][3], matrix2[3][3], sum[3][3];
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

    // Adding the matrices
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the sum matrix
    cout << "Sum of the matrices:" << endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// program to add two matrices