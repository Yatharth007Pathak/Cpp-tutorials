#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=m-i+1; j++) {
            cout << "#" << " ";
        }
        for(int j=1; j<=i; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}

// print solid square pattern where each row starts with '#' symbols and ends with '*' symbols, forming a diagonal pattern

/*
Let's break down how it works:

#include <iostream>: Includes the input-output stream library, necessary for input and output operations.

using namespace std;: Allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: Main function where the program execution begins. It returns an integer value indicating the exit status of the program.

int m;: Declares an integer variable m to store the number entered by the user.

cout << "enter the m : ";: Displays the message "enter the m : " to prompt the user to enter a number.

cin >> m;: Takes input from the user and stores it in the variable m.

for(int i=1; i<=m; i++) { ... }: This outer for loop iterates from 1 to m, controlling the number of rows in the pattern.

for(int j=1; j<=m-i+1; j++) { ... }: This inner for loop iterates from 1 to m-i+1, controlling the number of '#' symbols to be printed in each row. The number of '#' symbols decreases as i increases.

cout << "#" << " ";: Prints a '#' symbol followed by a space.

for(int j=1; j<=i; j++) { ... }: This inner for loop iterates from 1 to i, controlling the number of '' symbols to be printed in each row.
The number of '' symbols increases as i increases.

cout << "*" << " ";: Prints a '*' symbol followed by a space.

cout << endl;: After completing the inner loop for a row, it prints a newline character to move to the next row.

return 0;: Indicates successful termination of the program.
*/