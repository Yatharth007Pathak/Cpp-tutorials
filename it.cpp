#include <iostream>

using namespace std;

int main() {

    int matrix[3][3];
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

    // Finding and displaying the biggest element
    int mn = matrix[0][0];
    for( int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            mn = min(mn,matrix[i][j]);
        }
    }
    cout << "smallest element is : " << mn;

    return 0;
}

// find the minimum element in a given matrix