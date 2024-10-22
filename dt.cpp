#include <iostream>

using namespace std;

int main() {

    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sumEvenDigits = 0;

    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            sumEvenDigits += digit;
        }
        number /= 10;
    }

    cout << "Sum of all even digits: " << sumEvenDigits << endl;

    return 0;
}

// program to print sum of all the even digits of a given number

/*
This C++ code calculates the sum of all the even digits in a number entered by the user. Here's a breakdown of how it works:

#include <iostream>: This line includes the input-output stream library, allowing input and output operations.

using namespace std;: This line simplifies code by allowing the use of objects and functions 
from the std namespace without prepending std:: to each one.

int main() { ... }: This is the main function where the program execution begins. 
It returns an integer value indicating the exit status of the program.

int number;: Declares an integer variable number to store the number entered by the user.

cout << "Enter a number: ";: Displays the message "Enter a number: " to prompt the user to enter a number.

cin >> number;: Takes input from the user and stores it in the variable number.

int sumEvenDigits = 0;: Declares an integer variable sumEvenDigits and initializes it to 0. 
This variable will store the sum of all the even digits.

while (number > 0) { ... }: Starts a while loop that continues as long as number is greater than 0. 
This loop extracts the digits from the input number one by one.

int digit = number % 10;: Calculates the last digit of the number by taking the remainder when divided by 10.

if (digit % 2 == 0) { ... }: Checks if the extracted digit is even by checking if it's divisible by 2 with no remainder.

sumEvenDigits += digit;: If the digit is even, it adds it to the sumEvenDigits variable.

number /= 10;: Divides number by 10, effectively removing the last digit.

cout << "Sum of all even digits: " << sumEvenDigits << endl;: Displays the sum of all even digits to the console.

return 0;: Indicates successful termination of the program.
*/