#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        int factorial = 1; 
        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        cout << "Factorial of " << i << " = " << factorial << endl;
    }

    return 0;
}

// print the factorials of first 'n' numbers

/*
This C++ program calculates the factorial of numbers from 1 to a positive integer entered by the user. Let's break down how it works:

#include <iostream>: This line includes the input-output stream library, necessary for input and output operations.

using namespace std;: This line allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: This is the main function where the program execution begins. 
It returns an integer value indicating the exit status of the program.

int n;: Declares an integer variable n to store the positive integer entered by the user.

cout << "Enter a positive integer n: ";: Displays the message "Enter a positive integer n: " to prompt the user to enter a positive integer.

cin >> n;: Takes input from the user and stores it in the variable n.

if (n < 0) { ... }: Checks if the entered number is negative. 
If it is, it displays a message asking the user to enter a positive integer and then terminates the program with a return value of 1.

for (int i = 1; i <= n; ++i) { ... }: Starts a for loop that iterates from 1 to n. 
For each iteration, it calculates the factorial of the current number i using another nested for loop.

int factorial = 1;: Initializes the variable factorial to 1. This variable will store the factorial of the current number.

for (int j = 1; j <= i; ++j) { factorial *= j; }: Calculates the factorial of the current number i using a nested for loop.
It iterates from 1 to i, multiplying each number to the factorial variable.

cout << "Factorial of " << i << " = " << factorial << endl;: Displays the factorial of the current number i to the user.

return 0;: Indicates successful termination of the program.
*/