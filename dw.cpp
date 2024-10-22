#include <iostream>

using namespace std;

int main() {

    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int factorial = 1; 

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << number << " = " << factorial << endl;
    }
    
    return 0;
}

// print factorial of a given number 'n'

/*
This C++ program calculates the factorial of a non-negative integer entered by the user. Let's break down how it works:

#include <iostream>: This line includes the input-output stream library, necessary for input and output operations.

using namespace std;: This line allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: This is the main function where the program execution begins. 
It returns an integer value indicating the exit status of the program.

int number;: Declares an integer variable number to store the integer entered by the user.

cout << "Enter an integer: ";: Displays the message "Enter an integer: " to prompt the user to enter an integer.

cin >> number;: Takes input from the user and stores it in the variable number.

int factorial = 1;: Initializes the variable factorial to 1. This variable will store the factorial of the entered number.

if (number < 0) { ... } else { ... }: Checks if the entered number is negative. 
If it is, it displays a message saying that factorial is not defined for negative numbers. 
Otherwise, it proceeds with the factorial calculation.

for (int i = 1; i <= number; i++) { factorial *= i; }: Calculates the factorial of the entered number using a for loop. 
It iterates from 1 to the entered number and multiplies each number to the factorial variable.

cout << "Factorial of " << number << " = " << factorial << endl;: Displays the factorial of the entered number to the user.

return 0;: Indicates successful termination of the program.
*/