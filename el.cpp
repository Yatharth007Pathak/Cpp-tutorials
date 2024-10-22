#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// print the number right triangle

/*
This C++ program prints a right-angled triangle pattern of numbers where each row contains the sequence of numbers 
starting from 1 up to the row number. Here's a breakdown of the code:

#include <iostream>: Includes the input-output stream library, which is necessary for input and output operations.

using namespace std;: Allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: This is the main function where the program execution begins. 
It returns an integer value indicating the exit status of the program.

int m;: Declares an integer variable m to store the number of rows entered by the user.

cout << "enter the m : ";: Displays the message "enter the m : " to prompt the user to enter the number of rows.

cin >> m;: Takes input from the user and stores it in the variable m.

for(int i=1; i<=m; i++) { ... }: This outer for loop iterates from 1 to m, controlling the number of rows in the triangle.

for(int j=1; j<=i; j++) { ... }: This inner for loop iterates from 1 to the current row number i, 
controlling the sequence of numbers to be printed in each row.

cout << j << " ";: Prints the current column number j followed by a space for each element in the current row.

cout << endl;: After completing the inner loop for a row, it prints a newline character to move to the next row.

return 0;: Indicates successful termination of the program.
*/