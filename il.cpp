#include <iostream>

using namespace std;

int main() {

    // Initialize a 3x3 array
    int arr[3][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

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