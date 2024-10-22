#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter the side : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=m; j++) {
            cout << (char)(i+64) << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// print alphabet square

/*
This C++ program prints a square pattern with side length m, where each row contains the corresponding uppercase letter repeated m times. 
Let's break down the code:

#include <iostream>: Includes the input-output stream library, necessary for input and output operations.

using namespace std;: Allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: Main function where the program execution begins. It returns an integer value indicating the exit status of the program.

int m;: Declares an integer variable m to store the side length of the square entered by the user.

cout << "enter the side : ";: Displays the message "enter the side : " to prompt the user to enter the side length of the square.

cin >> m;: Takes input from the user and stores it in the variable m.

for(int i=1; i<=m; i++) { ... }: This outer for loop iterates from 1 to m, controlling the number of rows in the square.

for(int j=1; j<=m; j++) { ... }: This inner for loop iterates from 1 to m, controlling the number of columns in each row.

cout << (char)(i+64) << " ";: Prints the current row's corresponding uppercase letter followed by a space for each column in the current row. 
The expression (char)(i+64) converts the row number i to the corresponding uppercase letter:

ASCII value of 'A' is 65, so for i=1, i+64 equals 65, which corresponds to 'A'.
For i=2, i+64 equals 66, which corresponds to 'B', and so on.
cout << endl;: After completing the inner loop for a row, it prints a newline character to move to the next row.

return 0;: Indicates successful termination of the program.
*/