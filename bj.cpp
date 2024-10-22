#include <iostream>

using namespace std;

int main() {

    int n;

    // Ask the user to enter a positive integer
    cout << "Enter an integer: ";
    cin >> n;

    // Check if the number is positive
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
     
        return 1;                                                       // Return 1 to indicate an error
    }

// Check if the number is even or odd
    if (n % 2 == 0) { 
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
   
    return 0;
    }
}


// take an integer input and tell if it is even or odd

/*
if statement:
An if statement evaluates a condition. If the condition is true, the block of code inside the if statement is executed.
If the condition is false, the block of code inside the if statement is skipped.

if else statement:
An if else statement allows us to specify two blocks of code: one to be executed if the condition is true 
and another to be executed if the condition is false.
*/


/*
 here's a pointwise breakdown of the provided C++ code:

Include Header File:
#include <iostream>: This line includes the iostream library, providing functionality for input and output operations.

Main Function:
int main() { Code goes here }: Defines the main function where program execution begins and ends.

Declare Variables:
int n;: Declares an integer variable n to store the user's input.

Prompt for User Input:
cout << "Enter a positive integer: ";: Displays a message asking the user to enter a positive integer.
cin >> n;: Reads the user's input and stores it in the variable n.

Check if the Number is Positive:
if (n <= 0) { Error handling }: Checks if the value stored in num is less than or equal to zero.
Error Handling (If Number is Not Positive):

cout << "Please enter a positive integer." << endl;: Prints an error message if the input is not positive.
return 1;: Terminates the program with an error code (1).

Check if the Number is Even or Odd:
if (n % 2 == 0) { Number is even } else { Number is odd }: Uses the modulo operator % to determine if the number is even or odd.

Print Result:
cout << n << " is even." << endl;: If the condition in the if statement is true (i.e., n is even), 
this line prints the string "n is even" to the standard output.
cout << n << " is odd." << endl;: (else) If the condition in the if statement is false (i.e., n is odd), 
the execution jumps to this line. This line prints the string "n is odd" to the standard output.

Return Statement:
return 0;: Terminates the program and returns 0 to indicate successful execution.
*/