#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter a number : ";
    cin >> n;

    int sum = 0;

    while (n!=0) {
        int last_digit = n%10;
        n /= 10;
        sum += last_digit;
    }

    cout << sum;

    return 0;
}

// program to print sum of digits of a given number

/*
breakdown of the provided C++ code:

#include <iostream>: This line includes the input-output stream library, which is necessary for input and output operations.

using namespace std;: This line indicates that we're using the std namespace, which includes definitions for standard C++ symbols. 
It allows us to use objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: This is the main function where the program execution begins. 
It returns an integer value indicating the exit status of the program.

int n;: Declares an integer variable n to store the number entered by the user.

cout << "enter a number : ";: Outputs the message "enter a number : " to the console, prompting the user to enter a number.

cin >> n;: Takes input from the user and stores it in the variable n.

int sum = 0;: Declares an integer variable sum and initializes it to 0. 
This variable will be used to store the sum of the digits of the input number.

while (n!=0) { ... }: Starts a while loop that continues as long as n is not equal to 0. 
This loop extracts the digits from the input number one by one and calculates their sum.

int last_digit = n%10;: Computes the last digit of the number n by taking the remainder when n is divided by 10.

n /= 10;: Divides n by 10, effectively removing the last digit from n.

sum += last_digit;: Adds the last digit (last_digit) to the sum variable.

cout << sum;: Outputs the sum of the digits to the console.

return 0;: Indicates successful termination of the program.

This program essentially calculates the sum of the digits of a number entered by the user. 
It does so by repeatedly dividing the number by 10, extracting the last digit, and adding it to a running sum until the number becomes zero.
*/