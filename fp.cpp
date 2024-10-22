#include <iostream>

using namespace std;

int main() {

    int m;

    cout << "Enter the size of the cross pattern: ";
    cin >> m;

    for (int i=1; i<=m; i++) {
        for (int j=1; j<=m; j++) {
            if (j==i || j ==m-i+1) {
                cout << "*" << " ";
            } else {
                cout << " " << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

// print cross pattern using *

/*
Here's a breakdown of how it works:

#include <iostream>: Includes the input-output stream library, necessary for input and output operations.

using namespace std;: Allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: Main function where the program execution begins. It returns an integer value indicating the exit status of the program.

int m;: Declares an integer variable m to store the size of the cross pattern entered by the user.

cout << "Enter the size of the cross pattern: ";: Displays the message "Enter the size of the cross pattern: " to prompt the user to enter the size.

cin >> m;: Takes input from the user and stores it in the variable m.

for (int i=1; i<=m; i++) { ... }: This outer for loop iterates from 1 to m, controlling the number of rows in the square.

for (int j=1; j<=m; j++) { ... }: This inner for loop iterates from 1 to m, controlling the number of columns in each row.

if (j==i || j ==m-i+1) { ... }: Checks if the current position is on the main diagonal (i == j) or the antidiagonal (j == m - i + 1).

If the condition is true, it prints an asterisk (*) to form the cross.

Otherwise, it prints two spaces to leave the inner area of the square empty.

cout << endl;: After completing the inner loop for a row, it prints a newline character to move to the next row.

return 0;: Indicates successful termination of the program.
*/