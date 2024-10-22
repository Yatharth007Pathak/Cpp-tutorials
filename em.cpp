#include <iostream>

using namespace std;

int main() {

    int p = 1;

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=i; j++) {
            cout << p << " ";
            p++;
        }
        cout << endl;
    }
    
    return 0;
}

// print the number right triangle (floyd's triangle)

/*
This C++ program prints a right-angled triangle pattern of consecutive numbers starting from 1. 
The numbers are printed in a sequence that continues across rows. Let's break down the code:

#include <iostream>: Includes the input-output stream library, which is necessary for input and output operations.

using namespace std;: Allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: This is the main function where the program execution begins. 
It returns an integer value indicating the exit status of the program.

int p = 1;: Declares and initializes an integer variable p to 1. This variable will be used to print the consecutive numbers.

int m;: Declares an integer variable m to store the number of rows entered by the user.

cout << "enter the m : ";: Displays the message "enter the m : " to prompt the user to enter the number of rows.

cin >> m;: Takes input from the user and stores it in the variable m.

for(int i=1; i<=m; i++) { ... }: This outer for loop iterates from 1 to m, controlling the number of rows in the triangle.

for(int j=1; j<=i; j++) { ... }: This inner for loop iterates from 1 to the current row number i, 
controlling the number of elements to be printed in each row.

cout << p << " ";: Prints the current value of p followed by a space. This prints the consecutive numbers.

p++;: Increments p by 1, so the next number to be printed will be the next consecutive number.

cout << endl;: After completing the inner loop for a row, it prints a newline character to move to the next row.

return 0;: Indicates successful termination of the program.
*/