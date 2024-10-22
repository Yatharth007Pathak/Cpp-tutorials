#include <iostream>

using namespace std;

int main() {

    int matrix[3][3], transpose[3][3];
    int i, j;

    // Input matrix elements
    cout << "Enter elements of first matrix:" << endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Displaying the original matrix
    for( int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Compute transpose
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Displaying the transpose matrix
    cout << "Transpose of the matrix:" << endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// find transpose of a matrix