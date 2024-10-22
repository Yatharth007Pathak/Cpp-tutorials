#include <iostream>

using namespace std;

int main() {

    int number;
    cout << "Enter a number: ";
    cin >> number;

    int originalNumber = number;

    int reversedNumber = 0;

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        int last_digit = number % 10;
        reversedNumber = reversedNumber * 10 + last_digit;
        number /= 10;
    }

    if (originalNumber < 0) {
        reversedNumber = -reversedNumber;
    }

    int sum = originalNumber + reversedNumber;

    cout << "The sum of " << originalNumber << " and its reverse " << reversedNumber << " is " << sum << endl;

    return 0;
}

// program to print the sum of a given number and its reverse

/*
This C++ program takes a number input from the user, reverses its digits, and then calculates the sum of the original number and its reversed form. Let's break down how it works:

#include <iostream>: Includes the input-output stream library, necessary for input and output operations.

using namespace std;: Allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: Main function where the program execution begins. It returns an integer value indicating the exit status of the program.

int number;: Declares an integer variable number to store the number entered by the user.

cout << "Enter a number: ";: Displays the message "Enter a number: " to prompt the user to enter a number.

cin >> number;: Takes input from the user and stores it in the variable number.

int originalNumber = number;: Stores the original number entered by the user in the variable originalNumber.

int reversedNumber = 0;: Initializes the variable reversedNumber to store the reversed number.

if (number < 0) { number = -number; }: Checks if the entered number is negative. 
If it is, converts it to its positive counterpart to simplify the reversal process.

while (number > 0) { ... }: Reverses the digits of the number using a while loop. 
Iteratively extracts the last digit of the number and constructs the reversed number by multiplying it by 10 and adding the last digit.

if (originalNumber < 0) { reversedNumber = -reversedNumber; }: If the original number was negative, 
makes the reversed number negative to maintain consistency.

int sum = originalNumber + reversedNumber;: Calculates the sum of the original number and its reversed form.

cout << "The sum of " << originalNumber << " and its reverse " << reversedNumber << " is " << sum << endl;: Displays the original number, 
its reversed form, and their sum to the user.

return 0;: Indicates successful termination of the program.
*/