#include <iostream>

using namespace std;

int main() {

    int n;

    // Prompt the user to input the integer n
    cout << "Enter an integer n: ";
    cin >> n;

    // Create an array to hold the squares of natural numbers till n
    int squares[n];

    // Fill the array with squares of natural numbers
    for (int i=1; i<=n; i++) {
        squares[i-1] = i * i;
    }

    // Print the elements of the array
    cout << "Squares of natural numbers till " << n << ": ";
    for (int i=0; i<n; i++) {
        cout << squares[i] << " ";
    }

    return 0;
}


// Given an integer n. Create an array containing squares of all natural numbers till n and print the elements of the array

/*
Code Breakdown

Include Header and Namespace:
#include <iostream>
using namespace std;
These lines include the necessary header for input/output operations and bring all the names in the std namespace into the global namespace.

Main Function:
int main() {
This is the entry point of the program where execution begins.

Prompt User for Input:
int n;
cout << "Enter an integer n: ";
cin >> n;
An integer n is declared to hold the user input.
The user is prompted to input an integer n.

Array Declaration:
int squares[n];
An integer array squares is declared with n elements to hold the squares of natural numbers.

Fill the Array:
for (int i = 1; i <= n; ++i) {
    squares[i-1] = i * i;
}
A for loop iterates from i = 1 to i <= n (inclusive), covering all natural numbers from 1 to n.
In each iteration, the square of the current number i is calculated and stored in the array squares at index i-1.

Print the Elements:
cout << "Squares of natural numbers till " << n << ": ";
for (int i = 0; i < n; ++i) {
    cout << squares[i] << " ";
}
A message indicating the squares of natural numbers till n is printed.
Another for loop iterates through the squares array and prints each element.

Return Statement:
return 0;
}
This line indicates that the main function returns an integer value of 0, signaling that the program has executed successfully.
*/