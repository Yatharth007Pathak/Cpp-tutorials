#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter number of rows : ";
    cin >> m;
    
    int n;
    cout << "enter number of columns : ";
    cin >> n;

    for(int i=1; i<=m; i++) {                      // rows = m
        for(int j=1; j<=n; j++) {                  // columns = n
            cout << "*" << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// print solid rectangle using * having 'm' rows and 'n' columns entered by the user

/*
This C++ program prints a rectangle pattern of asterisks with the number of rows and columns specified by the user. 
Here's a breakdown of how the code works:

#include <iostream>: Includes the input-output stream library, necessary for input and output operations.

using namespace std;: Allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: Main function where the program execution begins. It returns an integer value indicating the exit status of the program.

int m;: Declares an integer variable m to store the number of rows entered by the user.

cout << "enter number of rows : ";: Displays the message "enter number of rows : " to prompt the user to enter the number of rows.

cin >> m;: Takes input from the user and stores it in the variable m.

int n;: Declares an integer variable n to store the number of columns entered by the user.

cout << "enter number of columns : ";: Displays the message "enter number of columns : " to prompt the user to enter the number of columns.

cin >> n;: Takes input from the user and stores it in the variable n.

for(int i=1; i<=m; i++) { ... }: This outer for loop iterates from 1 to m, controlling the number of rows to be printed.

for(int j=1; j<=n; j++) { ... }: This inner for loop iterates from 1 to n, controlling the number of columns to be printed in each row.

cout << "*" << " ";: Prints an asterisk followed by a space for each column in the current row.

cout << endl;: After completing the inner loop for a row, it prints a newline character to move to the next row.

return 0;: Indicates successful termination of the program.
*/