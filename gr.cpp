#include <iostream>

using namespace std;

int factorial(int x) {
    int fact = 1;
    for(int i=1; i<=x; i++) {
        fact *= i;
    }
    return fact;

}

int main() {

    int n;
    cout << "enter n : ";
    cin >> n;

    int r;
    cout << "enter r : ";
    cin >> r;

    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);

    cout << "combination is : " << a/(b*c);

    return 0;
}

// combination of two numbers using a function

/*
Breakdown:
Include Directive:
This line includes the input-output stream library (iostream), necessary for using cin and cout.

Namespace Declaration:
using namespace std; allows using names from the standard namespace without explicitly qualifying them.

Factorial Function:
This function calculates the factorial of a given integer x.
It initializes a variable fact to 1.
It uses a for loop to calculate the factorial by multiplying each number from 1 to x.
It returns the factorial value.

Main Function:
This is the entry point of the program.

Variable Declaration and Input for n:
Declares an integer variable n.
Prompts the user to enter a value for n.
Reads the user input and stores it in the variable n.

Variable Declaration and Input for r:
Declares an integer variable r.
Prompts the user to enter a value for r.
Reads the user input and stores it in the variable r.

Factorial Calculations:
Calls the factorial function to calculate the factorials of n, r, and n-r 
and stores the results in variables a, b, and c respectively.

Combination Calculation and Output:
Calculates the combination C(n, r) using the formula n! / (r! * (n-r)!).
Outputs the result.

End of Main Function:
Indicates that the program has executed successfully.
*/