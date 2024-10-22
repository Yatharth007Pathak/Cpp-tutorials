#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter a number : ";
    cin >> n;

    int sum = 0;

    for(int i=1; i<=n; i++) {
        sum +=i;
    }

    cout << sum;    
    
    return 0;
}

// program to print summation from 1 to number 'n' entered by user

/*
This C++ program calculates the sum of all numbers from 1 to the number entered by the user. Let's break down how it works:

#include <iostream>: This line includes the input-output stream library, necessary for input and output operations.

using namespace std;: This line allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: This is the main function where the program execution begins. 
It returns an integer value indicating the exit status of the program.

int n;: Declares an integer variable n to store the number entered by the user.

cout << "enter a number : ";: Displays the message "enter a number : " to prompt the user to enter a number.

cin >> n;: Takes input from the user and stores it in the variable n.

int sum = 0;: Initializes the variable sum to 0. This variable will store the sum of all numbers from 1 to n.

for(int i=1; i<=n; i++) { sum += i; }: Calculates the sum of all numbers from 1 to n using a for loop. 
It iterates from 1 to n, adding each number to the sum variable.

cout << sum;: Displays the sum of all numbers from 1 to n to the user.

return 0;: Indicates successful termination of the program.
*/