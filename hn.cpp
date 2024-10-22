#include <iostream>

using namespace std;

int sum(int n) {                                                // function definition
    if(n==1) return 1;                                          // Base case: if n is 1, return 1
    return n + sum(n-1);                                        // Recursive case: n + sum of all numbers up to n-1
}

int main() {

    int n;
    cout << "enter n : ";
    cin >> n;

    cout << sum(n);                                             // Call the sum function with user input and print the result

    return 0;
}

// print sum from 1 to n

/*
breakdown of the code:

Function sum(int n)
Definition and Base Case
int sum(int n) {
    if(n == 1) return 1;                Base case: if n is 1, return 1
If n is 1, the function returns 1 directly because the sum of the first one natural number is 1.
    return n + sum(n - 1);              Recursive case: n + sum of all numbers up to n-1
}
If n is not 1, the function returns the value of n plus the result of sum(n - 1). 
This is the recursive step where the function calls itself with n-1.


Function main()
Input Handling and Function Call
int main() {
    int n;
    cout << "enter n : ";
    cin >> n;
The program prompts the user to enter a value for n and reads the input using cin.
    cout << sum(n);                     Calls the sum function with user input and prints the result
    return 0;
}


Example Execution
If the user enters 5, the function sum(5) will be evaluated as follows:

sum(5) returns 5 + sum(4)
sum(4) returns 4 + sum(3)
sum(3) returns 3 + sum(2)
sum(2) returns 2 + sum(1)
sum(1) returns 1 (base case)
Substituting back:

sum(2) becomes 2 + 1 = 3
sum(3) becomes 3 + 3 = 6
sum(4) becomes 4 + 6 = 10
sum(5) becomes 5 + 10 = 15
The program will output 15.
*/