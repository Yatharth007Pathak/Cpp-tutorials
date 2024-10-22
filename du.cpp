#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter a number : ";
    cin >> n;

    int reverse = 0;

    while (n!=0) {
        int last_digit = n%10;
        reverse *= 10;
        reverse += last_digit;
        n /= 10;
    }

    cout << reverse;
    
    return 0;
}

// program to print reverse of a given number

/*
This C++ program takes a number input from the user and then reverses the digits of that number. Let's break down how it works:

#include <iostream>: Includes the input-output stream library, which is necessary for input and output operations.

using namespace std;: This line allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: This is the main function where the program execution begins. 
It returns an integer value indicating the exit status of the program.

int n;: Declares an integer variable n to store the number entered by the user.

cout << "enter a number : ";: Outputs the message "enter a number : " to the console, prompting the user to enter a number.

cin >> n;: Takes input from the user and stores it in the variable n.

int reverse = 0;: Declares an integer variable reverse and initializes it to 0. This variable will store the reversed number.

while (n!=0) { ... }: Starts a while loop that continues as long as n is not equal to 0. 
This loop iteratively extracts the digits from the input number one by one and reverses them.

int last_digit = n%10;: Computes the last digit of the number n by taking the remainder when n is divided by 10.

reverse *= 10;: Multiplies reverse by 10 to make space for the next digit to be added.

reverse += last_digit;: Adds the last digit (last_digit) to the reverse variable.

n /= 10;: Divides n by 10, effectively removing the last digit from n.

cout << reverse;: Outputs the reversed number to the console.

return 0;: Indicates successful termination of the program.
*/