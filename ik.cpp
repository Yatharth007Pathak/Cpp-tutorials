#include <iostream>

using namespace std;

int main() {
    
    // Initialize a 3x3 array with values in row-major order
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Loop through rows
    for (int i = 0; i < 3; i++) {
        // Loop through columns
        for (int j = 0; j < 3; j++) {
            // Print the element at position (i, j)
            cout << arr[i][j] << " ";
        }
        // Print a newline after printing each row
        cout << endl;
    }

    return 0;
}