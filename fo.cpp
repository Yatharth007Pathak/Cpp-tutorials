#include <iostream>

using namespace std;

int main() {

    int m, n;

    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++) {
            if(i==1 || j==1 || i==m || j==n) {
                cout << "*" << " ";
            } else {
                cout << " " << " ";
            }
        }
        cout << endl;
    }

    return 0;
}


// print hollow rectangle using *

/*
Here's a breakdown of how it works:

#include <iostream>: Includes the input-output stream library, necessary for input and output operations.

using namespace std;: Allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: Main function where the program execution begins. It returns an integer value indicating the exit status of the program.

int m, n;: Declares two integer variables m and n to store the number of rows and columns entered by the user.

cout << "Enter the number of rows: ";: Displays the message "Enter the number of rows: " to prompt the user to enter the number of rows.

cin >> m;: Takes input from the user and stores it in the variable m.

cout << "Enter the number of columns: ";: Displays the message "Enter the number of columns: " to prompt the user to enter the number of columns.

cin >> n;: Takes input from the user and stores it in the variable n.

for(int i=1; i<=m; i++) { ... }: This outer for loop iterates from 1 to m, controlling the number of rows in the rectangle.

for(int j=1; j<=n; j++) { ... }: This inner for loop iterates from 1 to n, controlling the number of columns in each row.

if(i==1 || j==1 || i==m || j==n) { ... }: Checks if the current position is on the border of the rectangle.

If the condition is true (i.e., if it's on the first row, first column, last row, or last column), it prints an asterisk (*) to form the border.

Otherwise, it prints two spaces to leave the inner area of the rectangle empty.

cout << endl;: After completing the inner loop for a row, it prints a newline character to move to the next row.

return 0;: Indicates successful termination of the program.
*/