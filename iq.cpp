#include <iostream>

using namespace std;

int main() {

    int matrix1[3][3], matrix2[3][3], resultMatrix[3][3];
    int i, j, k;

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

    // Multiply the two matrices
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            resultMatrix[i][j] = 0;
            for(k=0; k<3; k++) {
                resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Displaying the resultant matrix
    cout << "Product of the matrices:" << endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// multiplication of two matrices