#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter the m : ";
    cin >> m;

    // Upper half of the diamond
    for(int i=1; i<=m; i++) {
        // Print leading spaces
        for(int j=i; j<m; j++) {
            cout << " " << " ";
        }
        // Print stars
        for(int j=1; j<=2*i-1; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i=m-1; i>=1; i--) {
        // Print leading spaces
        for (int j=m; j>i; j--) {
            cout << " " << " ";
        }
        // Print stars
        for (int j=1; j<=(2*i-1); j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}

// print diamond pattern using *

/*
here's the breakdown of the provided C++ code that prints a diamond pattern using asterisks:

Input:
The program prompts the user to enter an integer m.

Upper Half of the Diamond:
The upper half of the diamond is printed using a nested loop structure.
The outer loop (for(int i=1; i<=m; i++)) controls the number of rows in the upper half.
The first inner loop (for(int j=i; j<m; j++)) prints leading spaces before each row of asterisks.
The second inner loop (for(int j=1; j<=2*i-1; j++)) prints the asterisks for each row. The number of asterisks in each row is 2*i - 1.

Lower Half of the Diamond:
The lower half of the diamond is printed using a similar nested loop structure.
The outer loop (for(int i=m-1; i>=1; i--)) controls the number of rows in the lower half.
Similar to the upper half, the first inner loop prints leading spaces, and the second inner loop prints the asterisks.

Output:
Asterisks are printed in a pattern that forms a diamond shape.

End of Program:
The program returns 0 to indicate successful completion
*/