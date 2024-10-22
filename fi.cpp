#include <iostream>

using namespace std;

int main() {

    int p = 1;

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=m-i+1; j++) {
            cout << (char)(p+64) << " ";
            p++;
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

int p = 1;: Declares and initializes an integer variable p to 1. This variable will be used to represent the consecutive uppercase letters.

int m;: Declares an integer variable m to store the number entered by the user.

cout << "enter the m : ";: Displays the message "enter the m : " to prompt the user to enter a number.

cin >> m;: Takes input from the user and stores it in the variable m.

for(int i=1; i<=m; i++) { ... }: This outer for loop iterates from 1 to m, controlling the number of rows in the triangle.

for(int j=1; j<=m-i+1; j++) { ... }: This inner for loop iterates from 1 to the current number of elements in the row, 
which decreases as i increases. It controls the number of letters to be printed in each row.

cout << (char)(p+64) << " ";: Prints the corresponding uppercase letter for the current value of p. 
The expression (char)(p+64) converts the number p to its corresponding uppercase letter:

ASCII value of 'A' is 65, so for p=1, p+64 equals 65, which corresponds to 'A'.
For p=2, p+64 equals 66, which corresponds to 'B', and so on.
p++;: Increments p by 1 to represent the next consecutive uppercase letter.

cout << endl;: After completing the inner loop for a row, it prints a newline character to move to the next row.

return 0;: Indicates successful termination of the program.
*/