#include <iostream>

using namespace std;

int factorial(int x) {
    int fact = 1;
    for(int i=1; i<=x; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) {
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    return a/(b*c);
}

int main() {

    int n;
    cout << "enter n : ";
    cin >> n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << nCr(i,j) << " ";
        }
        cout << endl;
    }

    return 0;
}

// pascal triangle using combination of two numbers

/*
breakdown of the provided C++ code:

This code calculates and prints Pascal's Triangle up to the nth row. 
Pascal's Triangle is a triangular array of binomial coefficients. Each number in the triangle is the sum of the two directly above it.

Include Directive and Namespace:
#include <iostream>: Includes the input-output stream library.
using namespace std;: Allows using names from the standard namespace without explicitly qualifying them.

Factorial Function:
int factorial(int x) { ... }: Defines a function to calculate the factorial of a given integer x.
It initializes a variable fact to 1 and uses a for loop to calculate the factorial.
Returns the factorial value.

nCr Function:
int nCr(int n, int r) { ... }: Defines a function to calculate the combination C(n, r).
Calls the factorial function to calculate the factorials of n, r, and n-r.
Returns the combination value.

Main Function:
int main() { ... }: Entry point of the program.

Variable Declaration and Input for n:
Declares an integer variable n.
Prompts the user to enter a value for n.
Reads the user input and stores it in the variable n.

Nested Loops for Pascal's Triangle:
Uses two nested loops to iterate through each row and column of Pascal's Triangle.
The outer loop iterates from 0 to n, representing each row.
The inner loop iterates from 0 to i, representing each column in the current row.
Prints the value of nCr(i, j) followed by a space.

End of Main Function:
return 0;: Indicates that the program has executed successfully.
*/