#include <iostream>

using namespace std;

int main() {

    int m;                               // m must be odd
    cout << "enter the m : ";
    cin >> m;

    int mid = m/2 + 1;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=m; j++) {
            if(i== mid || j== mid) {
                cout << "*" << " ";
            } else {
                cout << " " << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

// print plus sign using *

/*
This C++ program prints a square pattern with a cross made of asterisks (*) in the center, leaving empty spaces around the cross. 
The size of the square is determined by the user input m, which must be odd for the cross to be properly centered. 
Let's break down the code:

#include <iostream>: Includes the input-output stream library, necessary for input and output operations.

using namespace std;: Allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: Main function where the program execution begins. It returns an integer value indicating the exit status of the program.

int m;: Declares an integer variable m to store the number entered by the user. m represents the size of the square.

cout << "enter the m : ";: Displays the message "enter the m : " to prompt the user to enter the size of the square.

cin >> m;: Takes input from the user and stores it in the variable m.

int mid = m/2 + 1;: Calculates the middle row and middle column of the square. Since m is assumed to be odd, 
(m/2 + 1) gives the index of the middle row and column.

for(int i=1; i<=m; i++) { ... }: This outer for loop iterates from 1 to m, controlling the number of rows in the square.

for(int j=1; j<=m; j++) { ... }: This inner for loop iterates from 1 to m, controlling the number of columns in each row.

if(i== mid || j== mid) { ... }: Checks if the current row i or column j is the middle row or column.

If the condition is true, it prints an asterisk (*) to form the cross.

Otherwise, it prints two spaces to create the empty spaces around the cross.

cout << endl;: After completing the inner loop for a row, it prints a newline character to move to the next row.

return 0;: Indicates successful termination of the program.
*/