#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=m-i+1; j++) {
            cout << (char)(j+64) << " ";
        }
        cout << endl;
    }

    return 0;
}

// print horizontally flipped alphabet right triangle

/*
This C++ program prints a right-angled triangle pattern where each row contains consecutive uppercase letters starting from 'A'. 
The number of letters in each row decreases as you move down the triangle. Let's break down the code:

#include <iostream>: Includes the input-output stream library, necessary for input and output operations.

using namespace std;: Allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: Main function where the program execution begins. It returns an integer value indicating the exit status of the program.

int m;: Declares an integer variable m to store the number entered by the user.

cout << "enter the m : ";: Displays the message "enter the m : " to prompt the user to enter a number.

cin >> m;: Takes input from the user and stores it in the variable m.

for(int i=1; i<=m; i++) { ... }: This outer for loop iterates from 1 to m, controlling the number of rows in the triangle.

for(int j=1; j<=m-i+1; j++) { ... }: This inner for loop iterates from 1 to the current number of elements in the row, 
which decreases as i increases. It controls the number of letters to be printed in each row.

cout << (char)(j+64) << " ";: Prints the corresponding uppercase letter for the current column number j. 
The expression (char)(j+64) converts the number j to its corresponding uppercase letter:

ASCII value of 'A' is 65, so for j=1, j+64 equals 65, which corresponds to 'A'.
For j=2, j+64 equals 66, which corresponds to 'B', and so on.
cout << endl;: After completing the inner loop for a row, it prints a newline character to move to the next row.

return 0;: Indicates successful termination of the program.
*/